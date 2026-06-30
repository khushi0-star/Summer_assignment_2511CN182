#include <iostream>
using namespace std;

// Complete mini project: Student Management System
// Uses arrays, strings, and functions together to manage student records

struct Student {
    int rollNo;
    string name;
    int marks[3]; // marks in 3 subjects
};

// Function to calculate total marks of a student
int calculateTotal(const Student &s) {
    int total = 0;
    for (int i = 0; i < 3; i++) total += s.marks[i];
    return total;
}

// Function to calculate percentage of a student
double calculatePercentage(const Student &s) {
    return calculateTotal(s) / 3.0;
}

// Function to determine grade based on percentage
char calculateGrade(double percentage) {
    if (percentage >= 90) return 'A';
    else if (percentage >= 75) return 'B';
    else if (percentage >= 60) return 'C';
    else if (percentage >= 40) return 'D';
    else return 'F';
}

// Function to display all student records with results
void displayResults(Student students[], int n) {
    cout << "\n----- Final Results -----\n";
    for (int i = 0; i < n; i++) {
        int total = calculateTotal(students[i]);
        double percentage = calculatePercentage(students[i]);
        char grade = calculateGrade(percentage);

        cout << "Roll No: " << students[i].rollNo
             << " | Name: " << students[i].name
             << " | Total: " << total
             << " | Percentage: " << percentage
             << " | Grade: " << grade << endl;
    }
}

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    Student students[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Roll No: ";
        cin >> students[i].rollNo;
        cin.ignore();
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Enter marks in 3 subjects: ";
        for (int j = 0; j < 3; j++) {
            cin >> students[i].marks[j];
        }
        cin.ignore();
    }

    displayResults(students, n);
    return 0;
}
