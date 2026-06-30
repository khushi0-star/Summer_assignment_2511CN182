#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Display array elements
    cout << "Array elements are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}