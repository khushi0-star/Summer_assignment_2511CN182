#include <iostream>
using namespace std;

// Simple inventory management system with add, display, and update options
struct Item {
    int id;
    string name;
    int quantity;
    double price;
};

int main() {
    const int MAX_ITEMS = 100;
    Item items[MAX_ITEMS];
    int count = 0;
    int choice;

    do {
        cout << "\n----- Inventory Management System -----\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Update Quantity\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1: {
                if (count >= MAX_ITEMS) {
                    cout << "Inventory is full." << endl;
                    break;
                }
                Item item;
                item.id = count + 1;
                cout << "Enter item name: ";
                getline(cin, item.name);
                cout << "Enter quantity: ";
                cin >> item.quantity;
                cout << "Enter price: ";
                cin >> item.price;
                cin.ignore();
                items[count++] = item;
                cout << "Item added with ID " << item.id << endl;
                break;
            }
            case 2: {
                cout << "\n----- Inventory List -----\n";
                for (int i = 0; i < count; i++) {
                    cout << "ID: " << items[i].id
                         << " | Name: " << items[i].name
                         << " | Quantity: " << items[i].quantity
                         << " | Price: " << items[i].price << endl;
                }
                break;
            }
            case 3: {
                int id, newQuantity;
                cout << "Enter item ID to update: ";
                cin >> id;
                cout << "Enter new quantity: ";
                cin >> newQuantity;
                bool found = false;
                for (int i = 0; i < count; i++) {
                    if (items[i].id == id) {
                        items[i].quantity = newQuantity;
                        cout << "Quantity updated successfully." << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Item not found." << endl;
                break;
            }
            case 4:
                cout << "Exiting Inventory Management System." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
