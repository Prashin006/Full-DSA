// parameterised way
#include <bits/stdc++.h>
using namespace std;
void fun(int i, int sum)
{
    if (i < 1)
    {
        cout << sum << endl;
        return;
    }
    fun(i - 1, sum + i);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    fun(n, 0);
    return 0;
}

// functional way
// #include <bits/stdc++.h>
// using namespace std;
// int f(int n)
// {
//     if (n == 0)
//         return 0;
//     return n + f(n - 1);
// }
// int main()
// {
//     int n;
//     cout << "Enter n: ";
//     cin >> n;
//     cout << "Sum of first n terms is " << f(n) << endl;
//     return 0;
// }