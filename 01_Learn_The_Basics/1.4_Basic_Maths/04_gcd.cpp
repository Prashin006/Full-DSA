// gcd of 2 nos without using library function
#include <bits/stdc++.h>
using namespace std;
int calcGCD(int n, int m)
{
    int a, b, r;
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (n > m)
    {
        a = n, b = m;
    }
    else
    {
        a = m, b = n;
    }
    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << "The gcd of " << a << " and " << b << " is " << calcGCD(a, b) << endl;
    return 0;
}