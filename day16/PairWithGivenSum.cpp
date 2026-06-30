#include <iostream>
using namespace std;

// Find a pair of elements in an array whose sum equals a given target
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n && !found; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " + " << arr[j]
                     << " = " << target << endl;
                found = true;
                break;
            }
        }
    }
    if (!found) cout << "No pair found with given sum." << endl;
    return 0;
}
