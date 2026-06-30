#include <iostream>
using namespace std;

// Move all zeroes in an array to the end while preserving order
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int insertPos = 0;
    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[insertPos++] = arr[i];
        }
    }
    // Fill the rest with zeroes
    while (insertPos < n) {
        arr[insertPos++] = 0;
    }

    cout << "Array after moving zeroes: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
