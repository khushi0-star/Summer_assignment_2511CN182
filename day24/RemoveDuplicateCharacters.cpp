#include <iostream>
using namespace std;

// Remove duplicate characters from a string, keeping first occurrences
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    bool seen[256] = {false};
    string result = "";
    for (char c : s) {
        if (!seen[(unsigned char)c]) {
            seen[(unsigned char)c] = true;
            result += c;
        }
    }

    cout << "String after removing duplicates: " << result << endl;
    return 0;
}
