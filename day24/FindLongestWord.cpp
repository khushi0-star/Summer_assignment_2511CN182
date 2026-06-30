#include <iostream>
#include <sstream>
using namespace std;

// Find the longest word in a sentence
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word, longestWord = "";
    while (ss >> word) {
        if (word.length() > longestWord.length()) {
            longestWord = word;
        }
    }

    cout << "Longest word: " << longestWord << endl;
    return 0;
}
