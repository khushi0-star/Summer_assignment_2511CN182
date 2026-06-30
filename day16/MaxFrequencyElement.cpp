#include <iostream>
using namespace std;

// Find the element with maximum frequency in an array
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int maxFreq = 0, maxElement = arr[0];
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i]) count++;
        }
        if (count > maxFreq) {
            maxFreq = count;
            maxElement = arr[i];
        }
    }

    cout << "Element with max frequency = " << maxElement
         << " (Frequency = " << maxFreq << ")" << endl;
    return 0;
}
