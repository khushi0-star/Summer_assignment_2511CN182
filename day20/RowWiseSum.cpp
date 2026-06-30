#include <iostream>
using namespace std;

// Find the sum of each row of a matrix
int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int a[rows][cols];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) cin >> a[i][j];

    cout << "Row-wise sums:\n";
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) sum += a[i][j];
        cout << "Row " << i + 1 << " sum = " << sum << endl;
    }
    return 0;
}
