#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, c;

    cout << "Enter n: ";
    cin >> n;

    if (n == 1)
        cout << "Nth term = " << a;
    else if (n == 2)
        cout << "Nth term = " << b;
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << "Nth term = " << b;
    }

    return 0;
}