#include <iostream>
using namespace std;

// Menu-driven system for common array operations
int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    do {
        cout << "\n----- Array Operations Menu -----\n";
        cout << "1. Input Array\n";
        cout << "2. Display Array\n";
        cout << "3. Find Sum\n";
        cout << "4. Find Maximum\n";
        cout << "5. Find Minimum\n";
        cout << "6. Sort Array\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter size of array: ";
                cin >> size;
                cout << "Enter " << size << " elements: ";
                for (int i = 0; i < size; i++) cin >> arr[i];
                break;
            }
            case 2: {
                cout << "Array elements: ";
                for (int i = 0; i < size; i++) cout << arr[i] << " ";
                cout << endl;
                break;
            }
            case 3: {
                int sum = 0;
                for (int i = 0; i < size; i++) sum += arr[i];
                cout << "Sum = " << sum << endl;
                break;
            }
            case 4: {
                int maxVal = arr[0];
                for (int i = 1; i < size; i++) if (arr[i] > maxVal) maxVal = arr[i];
                cout << "Maximum = " << maxVal << endl;
                break;
            }
            case 5: {
                int minVal = arr[0];
                for (int i = 1; i < size; i++) if (arr[i] < minVal) minVal = arr[i];
                cout << "Minimum = " << minVal << endl;
                break;
            }
            case 6: {
                for (int i = 0; i < size - 1; i++) {
                    for (int j = 0; j < size - 1 - i; j++) {
                        if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
                    }
                }
                cout << "Array sorted successfully." << endl;
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
