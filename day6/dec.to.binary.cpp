#include <iostream>
using namespace std;

int main() {
    int n, a[32], i = 0;
    cin >> n;

    while (n > 0) {
        a[i++] = n % 2;
        n /= 2;
    }

    for (int j = i - 1; j >= 0; j--)
        cout << a[j];

    return 0;
}