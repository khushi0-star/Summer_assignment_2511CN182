#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Number guessing game: user tries to guess a randomly generated number
int main() {
    srand((unsigned int)time(0));
    int target = rand() % 100 + 1; // random number between 1 and 100
    int guess, attempts = 0;

    cout << "Guess the number between 1 and 100!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess > target) {
            cout << "Too high! Try again." << endl;
        } else if (guess < target) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed it in " << attempts << " attempts." << endl;
        }
    } while (guess != target);

    return 0;
}
