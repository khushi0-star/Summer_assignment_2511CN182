#include <iostream>
using namespace std;

// Remove duplicate elements from an array, keeping only first occurrences
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int result[n];
    int resultSize = 0;

    for (int i = 0; i < n; i++) {
        bool alreadyPresent = false;
        for (int j = 0; j < resultSize; j++) {
            if (result[j] == arr[i]) { alreadyPresent = true; break; }
        }
        if (!alreadyPresent) {
            result[resultSize++] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < resultSize; i++) cout << result[i] << " ";
    cout << endl;
    return 0;
}
