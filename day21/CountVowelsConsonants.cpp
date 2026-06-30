#include <iostream>
#include <cctype>
using namespace std;

// Count vowels and consonants in a string
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int vowels = 0, consonants = 0;
    for (char c : s) {
        char lower = tolower(c);
        if (isalpha(lower)) {
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    return 0;
}
