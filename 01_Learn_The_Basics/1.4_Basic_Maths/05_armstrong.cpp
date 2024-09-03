// You are given an integer 'n'.
// Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.
#include <bits/stdc++.h>
using namespace std;
bool checkArmstrong(int n)
{
    int count = 0;
    int sum = 0;
    int num = n;
    while (num > 0)
    {
        num /= 10;
        count += 1;
    }
    num = n;
    for (int i = 0; i < count; i++)
    {
        int last_digit = num % 10;
        num /= 10;
        sum += pow(last_digit, count);
    }
    if (sum == n)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    cout << "The no " << n << " is " << checkArmstrong(n) << " armstrong no." << endl;
    return 0;
}