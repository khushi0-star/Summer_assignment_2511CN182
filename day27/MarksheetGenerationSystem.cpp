#include <iostream>
using namespace std;

// Marksheet generation system: computes total, percentage, and grade
struct MarksRecord {
    string studentName;
    int marks[5]; // marks in 5 subjects
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    MarksRecord records[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        getline(cin, records[i].studentName);
        cout << "Enter marks in 5 subjects:\n";
        for (int j = 0; j < 5; j++) {
            cin >> records[i].marks[j];
        }
        cin.ignore();
    }

    cout << "\n----- Marksheet -----\n";
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < 5; j++) total += records[i].marks[j];
        double percentage = total / 5.0;

        char grade;
        if (percentage >= 90) grade = 'A';
        else if (percentage >= 75) grade = 'B';
        else if (percentage >= 60) grade = 'C';
        else if (percentage >= 40) grade = 'D';
        else grade = 'F';

        cout << "Name: " << records[i].studentName
             << " | Total: " << total
             << " | Percentage: " << percentage
             << " | Grade: " << grade << endl;
    }
    return 0;
}
