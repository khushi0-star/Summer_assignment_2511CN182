#include <iostream>
using namespace std;

// Compress a string by counting consecutive repeated characters
// e.g. "aaabbc" -> "a3b2c1"
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string compressed = "";
    int n = s.length();
    int i = 0;
    while (i < n) {
        char current = s[i];
        int count = 0;
        while (i < n && s[i] == current) {
            count++;
            i++;
        }
        compressed += current;
        compressed += to_string(count);
    }

    cout << "Compressed string: " << compressed << endl;
    return 0;
}
