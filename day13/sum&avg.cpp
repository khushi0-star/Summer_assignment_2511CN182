#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    int sum = 0;
    float average;

    cout << "Enter size of array: ";
    cin >> n;

    // Input array elements
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    // Calculate average
    average = (float)sum / n;

    cout << "Sum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average;

    return 0;
}