#include <iostream>
using namespace std;

// Check whether a square matrix is symmetric (a[i][j] == a[j][i])
int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[n][n];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) cin >> a[i][j];

    bool isSymmetric = true;
    for (int i = 0; i < n && isSymmetric; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                isSymmetric = false;
                break;
            }
        }
    }

    if (isSymmetric)
        cout << "The matrix is symmetric." << endl;
    else
        cout << "The matrix is not symmetric." << endl;
    return 0;
}
