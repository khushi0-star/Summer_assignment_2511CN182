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

    int smallest = arr[0];
    int largest = arr[0];

    // Finding smallest and largest element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];

        if (arr[i] > largest)
            largest = arr[i];
    }

    cout << "Smallest element = " << smallest << endl;
    cout << "Largest element = " << largest;

    return 0;
}