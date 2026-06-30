#include <iostream>
using namespace std;

// Find the sum of each column of a matrix
int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int a[rows][cols];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) cin >> a[i][j];

    cout << "Column-wise sums:\n";
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) sum += a[i][j];
        cout << "Column " << j + 1 << " sum = " << sum << endl;
    }
    return 0;
}
