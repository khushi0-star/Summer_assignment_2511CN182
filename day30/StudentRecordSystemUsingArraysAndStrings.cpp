#include <iostream>
using namespace std;

// Student record system using arrays and strings, with sorting by marks
struct Student {
    string name;
    int marks;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    Student students[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, students[i].name);
        cout << "Enter marks: ";
        cin >> students[i].marks;
        cin.ignore();
    }

    // Sort students by marks in descending order (bubble sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(students[j], students[j + 1]);
            }
        }
    }

    cout << "\n----- Student Rankings -----\n";
    for (int i = 0; i < n; i++) {
        cout << "Rank " << i + 1 << ": " << students[i].name
             << " | Marks: " << students[i].marks << endl;
    }
    return 0;
}
