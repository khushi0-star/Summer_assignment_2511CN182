#include <iostream>
using namespace std;

// Simple bank account system with deposit, withdraw, and balance check
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    BankAccount(string name, double initialBalance) {
        accountHolder = name;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid amount or insufficient balance." << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << " | Balance: " << balance << endl;
    }
};

int main() {
    string name;
    double initialBalance;
    cout << "Enter account holder name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    BankAccount account(name, initialBalance);
    int choice;

    do {
        cout << "\n----- Bank Account Menu -----\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                double amount;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            }
            case 2: {
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            }
            case 3:
                account.displayBalance();
                break;
            case 4:
                cout << "Thank you for banking with us." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
