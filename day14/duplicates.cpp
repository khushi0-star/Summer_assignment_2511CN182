#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Duplicate elements are: ";

    // Finding duplicates
    for (int i = 0; i < n; i++)
    {
        int count = 1;

        if (arr[i] == -1)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;  // Mark duplicate
            }
        }

        if (count > 1)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}