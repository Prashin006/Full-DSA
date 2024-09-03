// You are given a number 'n'.
// Find the number of digits of 'n' that evenly divide 'n'.
#include <bits/stdc++.h>
using namespace std;
int countDigits(int n)
{
    int num = n;
    int count = 0;
    while (num > 0)
    {
        int last_digit = num % 10;
        if (last_digit == 0)
        {
            num = num / 10;
            continue;
        }
        if (n % last_digit == 0)
        {
            count += 1;
        }
        num = num / 10;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    int noOfPerfectDivisors = countDigits(n);
    cout << noOfPerfectDivisors << endl;
    return 0;
}