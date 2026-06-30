#include <iostream>
using namespace std;

// Find intersection of two arrays (common unique elements)
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

    cout << "Intersection: ";
    for (int i = 0; i < n1; i++) {
        // Skip duplicates already printed from arr1
        bool isDuplicate = false;
        for (int k = 0; k < i; k++) {
            if (arr1[k] == arr1[i]) { isDuplicate = true; break; }
        }
        if (isDuplicate) continue;

        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}
