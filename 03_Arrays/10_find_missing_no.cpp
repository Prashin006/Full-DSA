#include <bits/stdc++.h>
using namespace std;

int brute(int *arr, int n)
{
    // iterating for every no from 1 -> n
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        // iterating throughout the array elements
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }
        // We couldn't find the number "i" in the array so flag is 0 and return i
        if (flag == 0)
            return i;
    }
}

int better(int *arr, int n)
{
    int hash[n + 1] = {0};
    for (int i = 0; i < n - 1; i++)
    {
        hash[arr[i]] = 1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        if (hash[i] == 0)
            return i;
    }
}

int optimal1(int *arr, int n)
{
    int sum = n * (n + 1) / 2, arrSum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        arrSum += arr[i];
    }
    return (sum - arrSum);
}

int optimal2(int *arr, int n)
{
    int xor1 = 0, xor2 = 0;
    for (int i = 1; i <= n; i++)
    {
        xor1 = xor1 ^ i;
    }
    for (int i = 0; i < n - 1; i++)
    {
        xor2 = xor2 ^ arr[i];
    }
    return xor1 ^ xor2;
}

int main()
{
    int arr[] = {9, 2, 3, 1, 5, 7, 8, 6};
    int num = optimal2(arr, 9);
    cout << num << endl;
    return 0;
}