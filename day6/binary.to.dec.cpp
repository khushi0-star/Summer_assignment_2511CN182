#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, dec = 0, i = 0;

    cin >> n;

    while (n > 0) {
        dec += (n % 10) * pow(2, i);
        n /= 10;
        i++;
    }

    cout << dec;

    return 0;
}