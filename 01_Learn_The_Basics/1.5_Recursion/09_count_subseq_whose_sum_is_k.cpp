#include <bits/stdc++.h>
using namespace std;

int countSubseq(int ind, vector<int> &ds, int sum, int k, int arr[], int n)
{
    // strictly done if the array contains positives only
    if(sum > k) return 0;
    if (ind == n)
    {
        if (sum == k)
        {
            return 1;
        }
        return 0;
    }
    ds.emplace_back(arr[ind]);
    sum += arr[ind];
    // take
    int l = countSubseq(ind + 1, ds, sum, k, arr, n);
    ds.pop_back();
    sum -= arr[ind];
    // not take
    int r = countSubseq(ind + 1, ds, sum, k, arr, n);
    return l + r;
}

int main()
{
    int arr[] = {11, 23, 22, 34, 45};
    int k = 45;
    vector<int> ds;
    cout << "The no of subsequences whose sum is " << k << " are " << countSubseq(0, ds, 0, k, arr, sizeof(arr) / sizeof(arr[0])) << endl;
    return 0;
}