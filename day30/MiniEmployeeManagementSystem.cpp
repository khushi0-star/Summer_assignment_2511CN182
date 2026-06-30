#include <iostream>
using namespace std;

// Mini employee management system: add, display, and search employees
struct Employee {
    int id;
    string name;
    double salary;
};

int main() {
    const int MAX_EMPLOYEES = 50;
    Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    do {
        cout << "\n----- Mini Employee Management System -----\n";
        cout << "1. Add Employee\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                if (count >= MAX_EMPLOYEES) {
                    cout << "Employee list is full." << endl;
                    break;
                }
                Employee e;
                e.id = count + 1;
                cout << "Enter name: ";
                getline(cin, e.name);
                cout << "Enter salary: ";
                cin >> e.salary;
                cin.ignore();
                employees[count++] = e;
                cout << "Employee added with ID " << e.id << endl;
                break;
            }
            case 2: {
                cout << "\n----- Employee List -----\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << employees[i].id
                         << " | Name: " << employees[i].name
                         << " | Salary: " << employees[i].salary << endl;
                }
                break;
            }
            case 3: {
                int id;
                cout << "Enter ID to search: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (employees[i].id == id) {
                        cout << "Found: " << employees[i].name
                             << " | Salary: " << employees[i].salary << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee not found." << endl;
                break;
            }
            case 4:
                cout << "Exiting." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
