#include <iostream>
using namespace std;

// Employee management system using an array of structs
struct Employee {
    int id;
    string name;
    string department;
    double salary;
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;
    cin.ignore();

    Employee employees[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "ID: ";
        cin >> employees[i].id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, employees[i].name);
        cout << "Department: ";
        getline(cin, employees[i].department);
        cout << "Salary: ";
        cin >> employees[i].salary;
        cin.ignore();
    }

    cout << "\n----- Employee Records -----\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << employees[i].id
             << " | Name: " << employees[i].name
             << " | Department: " << employees[i].department
             << " | Salary: " << employees[i].salary << endl;
    }
    return 0;
}
