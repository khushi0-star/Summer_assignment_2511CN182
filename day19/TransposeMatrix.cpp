#include <iostream>
using namespace std;

// Find transpose of a matrix
int main() {
    int rows, cols;
    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int a[rows][cols];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) cin >> a[i][j];

    int transpose[cols][rows];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = a[i][j];

    cout << "Transpose of matrix:\n";
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) cout << transpose[i][j] << " ";
        cout << endl;
    }
    return 0;
}
