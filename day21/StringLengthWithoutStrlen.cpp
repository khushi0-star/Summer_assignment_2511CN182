#include <iostream>
using namespace std;

// Find length of a string without using strlen()
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int length = 0;
    for (char c : s) {
        length++;
    }

    cout << "Length of string = " << length << endl;
    return 0;
}
