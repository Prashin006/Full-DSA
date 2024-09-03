#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int reverse_num = 0;
    while (x != 0)
    {
        int last_digit = x % 10;
        x /= 10;
        // Below given line of code can cause overflow
        if (reverse_num > INT_MAX / 10 || (reverse_num == INT_MAX / 10 && last_digit > 7))
        {
            return 0;
        }
        if (reverse_num < INT_MIN / 10 || (reverse_num == INT_MIN / 10 && last_digit < -8))
        {
            return 0;
        }
        reverse_num = (reverse_num * 10) + last_digit;
    }
    return reverse_num;
}
int main()
{
    int n;
    cin >> n;
    cout << reverse(n) << endl;
    return 0;
}