#include <iostream>
using namespace std;

// Find the maximum occurring character in a string
int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int freq[256] = {0};
    for (char c : s) freq[(unsigned char)c]++;

    char maxChar = s[0];
    int maxFreq = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    cout << "Maximum occurring character: " << maxChar
         << " (Frequency = " << maxFreq << ")" << endl;
    return 0;
}
