#include <iostream>
using namespace std;

// Find common characters between two strings
int main() {
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    bool freq1[256] = {false};
    for (char c : s1) freq1[(unsigned char)c] = true;

    bool printed[256] = {false};
    cout << "Common characters: ";
    for (char c : s2) {
        if (freq1[(unsigned char)c] && !printed[(unsigned char)c]) {
            cout << c << " ";
            printed[(unsigned char)c] = true;
        }
    }
    cout << endl;
    return 0;
}
