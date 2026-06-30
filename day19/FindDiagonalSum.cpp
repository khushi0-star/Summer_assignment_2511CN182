#include <iostream>
using namespace std;

// Find sum of both diagonals of a square matrix
int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[n][n];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> a[i][j];

    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += a[i][i];
        secondaryDiagonalSum += a[i][n - 1 - i];
    }

    cout << "Primary diagonal sum = " << primaryDiagonalSum << endl;
    cout << "Secondary diagonal sum = " << secondaryDiagonalSum << endl;
    return 0;
}
