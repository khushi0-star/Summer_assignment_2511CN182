#include <iostream>
using namespace std;

// Check whether a given string is a palindrome
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string reversed = s;
    int start = 0, end = reversed.length() - 1;
    while (start < end) {
        swap(reversed[start], reversed[end]);
        start++;
        end--;
    }

    if (s == reversed)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;
    return 0;
}
