#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, key;
    bool found = false;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    // Linear Search
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element not found";
    }

    return 0;
}