#include <iostream>
#include <algorithm>
using namespace std;

// Menu-driven system for common string operations
int main() {
    string s;
    int choice;

    do {
        cout << "\n----- String Operations Menu -----\n";
        cout << "1. Input String\n";
        cout << "2. Display String\n";
        cout << "3. Find Length\n";
        cout << "4. Reverse String\n";
        cout << "5. Convert to Uppercase\n";
        cout << "6. Check Palindrome\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter a string: ";
                getline(cin, s);
                break;
            case 2:
                cout << "Current string: " << s << endl;
                break;
            case 3:
                cout << "Length = " << s.length() << endl;
                break;
            case 4: {
                string reversed = s;
                reverse(reversed.begin(), reversed.end());
                cout << "Reversed string: " << reversed << endl;
                break;
            }
            case 5: {
                string upper = s;
                for (auto &c : upper) c = toupper(c);
                cout << "Uppercase string: " << upper << endl;
                break;
            }
            case 6: {
                string reversed = s;
                reverse(reversed.begin(), reversed.end());
                if (s == reversed) cout << "The string is a palindrome." << endl;
                else cout << "The string is not a palindrome." << endl;
                break;
            }
            case 7:
                cout << "Exiting." << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (choice != 7);

    return 0;
}
