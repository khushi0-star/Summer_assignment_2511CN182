#include <iostream>
using namespace std;

// Simple contact management system with add, display, and search options
struct Contact {
    string name;
    string phoneNumber;
};

int main() {
    const int MAX_CONTACTS = 100;
    Contact contacts[MAX_CONTACTS];
    int count = 0;
    int choice;

    do {
        cout << "\n----- Contact Management System -----\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                if (count >= MAX_CONTACTS) {
                    cout << "Contact list is full." << endl;
                    break;
                }
                cout << "Enter name: ";
                getline(cin, contacts[count].name);
                cout << "Enter phone number: ";
                getline(cin, contacts[count].phoneNumber);
                count++;
                cout << "Contact added successfully." << endl;
                break;
            }
            case 2: {
                cout << "\n----- Contact List -----\n";
                for (int i = 0; i < count; i++) {
                    cout << "Name: " << contacts[i].name
                         << " | Phone: " << contacts[i].phoneNumber << endl;
                }
                break;
            }
            case 3: {
                string searchName;
                cout << "Enter name to search: ";
                getline(cin, searchName);
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (contacts[i].name == searchName) {
                        cout << "Found: " << contacts[i].name
                             << " | Phone: " << contacts[i].phoneNumber << endl;
                        found = true;
                    }
                }
                if (!found) cout << "Contact not found." << endl;
                break;
            }
            case 4:
                cout << "Exiting Contact Management System." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
