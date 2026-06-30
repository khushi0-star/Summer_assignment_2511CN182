#include <iostream>
#include <algorithm>
using namespace std;

// Sort an array of words by their length (ascending)
bool compareByLength(const string &a, const string &b) {
    return a.length() < b.length();
}

int main() {
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    cin.ignore();

    string words[n];
    cout << "Enter " << n << " words:\n";
    for (int i = 0; i < n; i++) {
        getline(cin, words[i]);
    }

    sort(words, words + n, compareByLength);

    cout << "Words sorted by length:\n";
    for (int i = 0; i < n; i++) {
        cout << words[i] << endl;
    }
    return 0;
}
