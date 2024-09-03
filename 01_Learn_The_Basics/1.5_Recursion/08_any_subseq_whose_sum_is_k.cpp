#include <bits/stdc++.h>
using namespace std;

bool printAnySubseqSumK(int ind, vector<int> &ds, int sum, int k, int arr[], int n)
{
    if (ind == n)
    {
        if (sum == k)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
            return true;
        }
        return false;
    }
    // take
    ds.emplace_back(arr[ind]);
    sum += arr[ind];
    if (printAnySubseqSumK(ind + 1, ds, sum, k, arr, n) == true)
    {
        return true;
    }

    ds.pop_back();
    sum -= arr[ind];
    // not take
    if (printAnySubseqSumK(ind + 1, ds, sum, k, arr, n) == true)
        return true;
    return false;
}

int main()
{
    int arr[] = {1, 2, 34, 11, 23, 45};
    vector<int> ds;
    printAnySubseqSumK(0, ds, 0, 34, arr, sizeof(arr) / sizeof(arr[0]));
    return 0;
}