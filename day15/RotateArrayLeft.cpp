#include <iostream>
using namespace std;

// Rotate array to the left by d positions
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int d;
    cout << "Enter number of positions to rotate left: ";
    cin >> d;
    d = d % n;

    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + d) % n];
    }

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) cout << temp[i] << " ";
    cout << endl;
    return 0;
}
