#include <iostream>
using namespace std;

// Recursive function to print stars in a row
void printStars(int n)
{
    if (n == 0)
        return;

    cout << "*";
    printStars(n - 1);
}

// Recursive function to print rows
void printPattern(int row, int n)
{
    if (row > n)
        return;

    printStars(row);
    cout << endl;

    printPattern(row + 1, n);
}

int main()
{
    int n;

    cout << "Enter number of rows: ";
    cin >> n;

    printPattern(1, n);

    return 0;
}