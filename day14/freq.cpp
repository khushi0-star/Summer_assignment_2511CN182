#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n, key;
    int count = 0;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter element to find frequency: ";
    cin >> key;

    // Count frequency
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            count++;
        }
    }

    cout << "Frequency of " << key << " is: " << count;

    return 0;
}