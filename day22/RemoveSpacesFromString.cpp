#include <iostream>
using namespace std;

// Remove all spaces from a string
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string result = "";
    for (char c : s) {
        if (c != ' ') {
            result += c;
        }
    }

    cout << "String without spaces: " << result << endl;
    return 0;
}
