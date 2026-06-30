#include <iostream>
using namespace std;

// Simple library management system with add, display, and search options
struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

int main() {
    const int MAX_BOOKS = 100;
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    do {
        cout << "\n----- Library Management System -----\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book by Title\n";
        cout << "4. Issue Book\n";
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
                Book b;
                b.id = count + 1;
                cout << "Enter title: ";
                getline(cin, b.title);
                cout << "Enter author: ";
                getline(cin, b.author);
                b.isIssued = false;
                books[count++] = b;
                cout << "Book added with ID " << b.id << endl;
                break;
            }
            case 2: {
                cout << "\n----- Book List -----\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << books[i].id
                         << " | Title: " << books[i].title
                         << " | Author: " << books[i].author
                         << " | Status: " << (books[i].isIssued ? "Issued" : "Available") << endl;
                }
                break;
            }
            case 3: {
                string searchTitle;
                cout << "Enter title to search: ";
                getline(cin, searchTitle);
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (books[i].title == searchTitle) {
                        cout << "Found: ID " << books[i].id << ", Author: " << books[i].author << endl;
                        found = true;
                    }
                }
                if (!found) cout << "Book not found." << endl;
                break;
            }
            case 4: {
                int id;
                cout << "Enter book ID to issue: ";
                cin >> id;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (books[i].id == id) {
                        if (books[i].isIssued) {
                            cout << "Book already issued." << endl;
                        } else {
                            books[i].isIssued = true;
                            cout << "Book issued successfully." << endl;
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Book not found." << endl;
                break;
            }
            case 5:
                cout << "Exiting Library System." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
