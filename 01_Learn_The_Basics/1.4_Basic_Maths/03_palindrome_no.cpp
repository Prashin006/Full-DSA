// Check whether a given number 'n' is a palindrome number.
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    int num = x;
    int reverse_num = 0;
    if (x < 0)
    {
        return false;
    }
    while (x != 0)
    {
        int last_digit = x % 10;
        x /= 10;
        if (reverse_num > INT_MAX / 10 || (reverse_num == INT_MAX && last_digit > 7))
        {
            return false;
        }
        reverse_num = (reverse_num * 10) + last_digit;
    }
    if (reverse_num == num)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    cout << isPalindrome(n) << endl;
    return 0;
}