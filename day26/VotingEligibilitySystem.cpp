#include <iostream>
using namespace std;

// Determine voting eligibility based on age
int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else {
        cout << "You are not eligible to vote. You need to wait "
             << (18 - age) << " more year(s)." << endl;
    }
    return 0;
}
