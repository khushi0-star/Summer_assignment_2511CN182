#include <iostream>
using namespace std;

// Simple ATM simulation with balance check, deposit, and withdrawal
int main() {
    double balance = 5000.0; // starting balance
    int choice;

    do {
        cout << "\n----- ATM Menu -----\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Current balance: " << balance << endl;
                break;
            case 2: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful. New balance: " << balance << endl;
                } else {
                    cout << "Invalid amount." << endl;
                }
                break;
            }
            case 3: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Withdrawal successful. New balance: " << balance << endl;
                } else {
                    cout << "Invalid amount or insufficient balance." << endl;
                }
                break;
            }
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
