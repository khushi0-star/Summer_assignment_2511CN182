#include <iostream>
using namespace std;

// Find the first non-repeating character in a string
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int freq[256] = {0};
    for (char c : s) freq[(unsigned char)c]++;

    for (char c : s) {
        if (freq[(unsigned char)c] == 1) {
            cout << "First non-repeating character: " << c << endl;
            return 0;
        }
    }

    cout << "No non-repeating character found." << endl;
    return 0;
}
