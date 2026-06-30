#include <iostream>
using namespace std;

// Reverse a given string
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int start = 0, end = s.length() - 1;
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }

    cout << "Reversed string: " << s << endl;
    return 0;
}
