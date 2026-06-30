#include <iostream>
using namespace std;

// Find union of two arrays (unique elements from both)
int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter " << n1 << " elements: ";
    for (int i = 0; i < n1; i++) cin >> arr1[i];

    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter " << n2 << " elements: ";
    for (int i = 0; i < n2; i++) cin >> arr2[i];

    int result[n1 + n2];
    int resultSize = 0;

    // Add unique elements from arr1
    for (int i = 0; i < n1; i++) {
        bool exists = false;
        for (int j = 0; j < resultSize; j++) {
            if (result[j] == arr1[i]) { exists = true; break; }
        }
        if (!exists) result[resultSize++] = arr1[i];
    }
    // Add unique elements from arr2
    for (int i = 0; i < n2; i++) {
        bool exists = false;
        for (int j = 0; j < resultSize; j++) {
            if (result[j] == arr2[i]) { exists = true; break; }
        }
        if (!exists) result[resultSize++] = arr2[i];
    }

    cout << "Union: ";
    for (int i = 0; i < resultSize; i++) cout << result[i] << " ";
    cout << endl;
    return 0;
}
