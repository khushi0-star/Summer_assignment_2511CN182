#include <iostream>
using namespace std;

// Simple console-based quiz application
int main() {
    string questions[5] = {
        "What is the capital of France?",
        "Which language is used to develop this program?",
        "How many continents are there on Earth?",
        "What is the boiling point of water in Celsius?",
        "Which data structure works on FIFO principle?"
    };
    string options[5][4] = {
        {"A. Berlin", "B. Madrid", "C. Paris", "D. Rome"},
        {"A. Python", "B. C++", "C. Java", "D. JavaScript"},
        {"A. 5", "B. 6", "C. 7", "D. 8"},
        {"A. 50", "B. 100", "C. 150", "D. 200"},
        {"A. Stack", "B. Queue", "C. Tree", "D. Graph"}
    };
    char correctAnswers[5] = {'C', 'B', 'C', 'B', 'B'};

    int score = 0;
    char userAnswer;

    for (int i = 0; i < 5; i++) {
        cout << "\nQ" << i + 1 << ". " << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }
        cout << "Enter your answer (A/B/C/D): ";
        cin >> userAnswer;
        userAnswer = toupper(userAnswer);

        if (userAnswer == correctAnswers[i]) {
            cout << "Correct!" << endl;
            score++;
        } else {
            cout << "Wrong! Correct answer: " << correctAnswers[i] << endl;
        }
    }

    cout << "\nYour final score: " << score << " out of 5" << endl;
    return 0;
}
