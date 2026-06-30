#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int original = n;
    int reverse = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    return original == reverse;
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n))
        cout << n << " is a palindrome number";
    else
        cout << n << " is not a palindrome number";

    return 0;
}