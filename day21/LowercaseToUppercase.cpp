#include <iostream>
#include <cctype>
using namespace std;

// Convert a string from lowercase to uppercase
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    for (int i = 0; i < (int)s.length(); i++) {
        s[i] = toupper(s[i]);
    }

    cout << "Uppercase string: " << s << endl;
    return 0;
}
