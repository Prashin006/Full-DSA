// Patterns
#include <iostream>
#include <string>
using namespace std;

void print1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > 0; j--) // for(int j = 0;j<x;j++) will print the same result
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // int j = 1;
        // while (j != i + 1)
        // {
        //     cout << j;
        //     j++;
        // }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}
void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // int j = 1;
        // while (j != i + 1)
        // {
        //     cout << j;
        //     j++;
        // }
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
}
void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i + 1; j > 0; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1, j = n - i + 1; k < n, j > 0; k++, j--)
        {
            cout << k;
        }
        cout << "\n";
    }
}
void print7(int n)
{
    // Method 1
    // for (int i = 1, k = 1; i <= n, k <= n; i++, k++)
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    //         if (j > n - k && j < n + k)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << "\n";
    // }

    // Method 2
    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        cout << "\n";
    }
}
void print8(int n)
{
    // Method 1
    // for (int i = 1, k = n; i <= n, k > 0; i++, k--)
    // {
    //     for (int j = 1; j <= 2 * n - 1; j++)
    //     {
    //         if (j > n - k && j < n + k)
    //         {
    //             cout << "*";
    //         }
    //         else
    //         {
    //             cout << " ";
    //         }
    //     }
    //     cout << "\n";
    // }

    // Method 2
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 2 * (n - i) + 1; j > 0; j--)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        cout << "\n";
    }
}
void print9(int n)
{
    for (int i = 1, k = 1; i <= n, k <= n; i++, k++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j > n - k && j < n + k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    for (int i = 1, k = n; i <= n, k > 0; i++, k--)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j > n - k && j < n + k)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}
void print10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void print11(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (i + j - 1) % 2 << " ";
        }
        cout << "\n";
    }
}
void print12(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}
void print13(int n)
{
    int star = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << star << " ";
            star++;
        }
        cout << "\n";
    }
}
void print14(int n)
{
    // Method 1
    // for (int i = 65; i < 65 + n; i++)
    // {
    //     for (int j = 65; j <= i; j++)
    //     {
    //         cout << char(j);
    //     }
    //     cout << "\n";
    // }

    // Method 2
    for (int i = 0; i < n; i++)
    {
        for (char c = 'A'; c < 'A' + i; c++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }
}
void print15(int n)
{
    // Method 1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j <= n; j++)
    //     {
    //         cout << char(65 + j - i);
    //     }
    //     cout << "\n";
    // }

    // Method 2
    for (int i = 1; i <= n; i++)
    {
        for (char c = 'A'; c <= 'A' + n - i; c++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }
}
void print16(int n)
{
    // Method 1
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << char(64 + i);
    //     }
    //     cout << "\n";
    // }

    // Method 2
    for (int i = 0; i < n; i++)
    {
        char c = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
        }
        cout << "\n";
    }
}
void print17(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        // letters
        char c = 'A';
        int breakPoint = (2 * i - 1) / 2;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << c;
            if (j <= breakPoint)
                c++;
            else
                c--;
        }
        // spaces
        for (int j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        cout << "\n";
    }
}
void print18(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int star = n;
        for (int j = 1; j <= i; j++)
        {
            cout << char(64 + star - i + j) << " ";
        }
        cout << "\n";
    }
}
void print19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void print20(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n - 1; i++)
    {
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
void print21(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
        }
        else
        {
            cout << "*";
            for (int j = 1; j <= n - 2; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
}
void print22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            //  we take the minimum distance of the current cell from each of the ends of the square and make the current cell value equal to that number.
            // initializing the distance from top, bottom, left & right
            int top = i;
            int left = j;
            int bottom = 2 * (n - 1) - i;
            int right = 2 * (n - 1) - j;
            cout << (n - (min(top, min(left, min(bottom, right))))) << " ";
        }
        cout << "\n";
    }
}
int main()
{
    int x;
    cin >> x;
    // Pattern 1
    // print1(x);

    // Pattern 2
    // print2(x);

    // Pattern 3
    // print3(x);

    // Pattern 4
    // print4(x);

    // Pattern 5
    // print5(x);

    // Pattern 6
    // print6(x);

    // Pattern 7
    // print7(x);

    // Pattern 8
    // print8(x);

    // Pattern 9
    // print9(x);

    // Pattern 10
    print10(x);

    // Pattern 11
    // print11(x);

    // Pattern 12
    // print12(x);

    // Pattern 13
    // print13(x);

    // Pattern 14
    // print14(x);

    // Pattern 15
    // print15(x);

    // Pattern 16
    // print16(x);

    // Pattern 17
    // print17(x);

    // Pattern 18
    // print18(x);

    // Pattern 19
    // print19(x);

    // Pattern 20
    // print20(x);

    // Pattern 21
    // print21(x);

    // Pattern 22
    // print22(x);
    return 0;
}