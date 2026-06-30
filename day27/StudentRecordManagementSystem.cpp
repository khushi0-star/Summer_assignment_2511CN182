#include <iostream>
using namespace std;

// Student record management system using an array of structs
struct Student {
    int rollNo;
    string name;
    float marks;
};

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
        cout << "Marks: ";
        cin >> students[i].marks;
        cin.ignore();
    }

    cout << "\n----- Student Records -----\n";
    for (int i = 0; i < n; i++) {
        cout << "Roll No: " << students[i].rollNo
             << " | Name: " << students[i].name
             << " | Marks: " << students[i].marks << endl;
    }
    return 0;
}
