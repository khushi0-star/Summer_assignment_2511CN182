#include <iostream>
using namespace std;

// Check whether one string is a rotation of another
int main() {
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    if (s1.length() != s2.length()) {
        cout << "Not a rotation." << endl;
        return 0;
    }

    // s2 is a rotation of s1 if it is a substring of (s1 + s1)
    string combined = s1 + s1;
    if (combined.find(s2) != string::npos) {
        cout << "Strings are rotations of each other." << endl;
    } else {
        cout << "Strings are not rotations of each other." << endl;
    }
    return 0;
}
