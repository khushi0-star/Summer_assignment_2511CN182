#include <iostream>
using namespace std;

// Find frequency of each character in a string
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int freq[256] = {0};
    for (char c : s) {
        freq[(unsigned char)c]++;
    }

    cout << "Character frequencies:\n";
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != ' ') {
            cout << (char)i << " : " << freq[i] << endl;
        }
    }
    return 0;
}
