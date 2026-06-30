#include <iostream>
using namespace std;

// Mini library system: add books, issue books, and display catalog
struct Book {
    string title;
    bool isIssued;
};

int main() {
    const int MAX_BOOKS = 50;
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    do {
        cout << "\n----- Mini Library System -----\n";
        cout << "1. Add Book\n";
        cout << "2. Issue Book\n";
        cout << "3. Return Book\n";
        cout << "4. Display Catalog\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                if (count >= MAX_BOOKS) {
                    cout << "Library is full." << endl;
                    break;
                }
                cout << "Enter book title: ";
                getline(cin, books[count].title);
                books[count].isIssued = false;
                count++;
                cout << "Book added." << endl;
                break;
            }
            case 2: {
                string title;
                cout << "Enter title to issue: ";
                getline(cin, title);
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (books[i].title == title && !books[i].isIssued) {
                        books[i].isIssued = true;
                        cout << "Book issued successfully." << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not available." << endl;
                break;
            }
            case 3: {
                string title;
                cout << "Enter title to return: ";
                getline(cin, title);
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (books[i].title == title && books[i].isIssued) {
                        books[i].isIssued = false;
                        cout << "Book returned successfully." << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found or not issued." << endl;
                break;
            }
            case 4: {
                cout << "\n----- Catalog -----\n";
                for (int i = 0; i < count; i++) {
                    cout << books[i].title << " - "
                         << (books[i].isIssued ? "Issued" : "Available") << endl;
                }
                break;
            }
            case 5:
                cout << "Exiting." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
