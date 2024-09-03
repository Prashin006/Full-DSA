#include <bits/stdc++.h>
using namespace std;

void brute(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    vector<int> temp(k);
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    // shifting
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    // putting
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - n + k];
    }
}

void optimal(vector<int> &arr, int k)
{
    int n = arr.size();
    k = k % n;
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.begin() + n);
    reverse(arr.begin(), arr.begin() + n);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    optimal(arr, 3);
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}