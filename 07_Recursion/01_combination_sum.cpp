#include <bits/stdc++.h>
using namespace std;

void allSubseq(int ind, int arr[], int target, int n, vector<vector<int>> &ans, vector<int> &ds)
{
    if (ind == n)
    {
        if (target == 0)
        {
            ans.emplace_back(ds);
        }
        return;
    }
    // take => we are taking the element at current index. Now index remains same as we have the option to again pick the same element
    if (arr[ind] <= target)
    {
        ds.emplace_back(arr[ind]);
        allSubseq(ind, arr, target - arr[ind], n, ans, ds);
        ds.pop_back();
    }
    // not take
    allSubseq(ind + 1, arr, target, n, ans, ds);
}

int main()
{
    int arr[] = {2, 3, 6, 7};
    vector<vector<int>> ans;
    vector<int> ds;
    allSubseq(0, arr, 7, sizeof(arr) / sizeof(arr[0]), ans, ds);
    for (auto it : ans)
    {
        for (auto ir : it)
        {
            cout << ir << " ";
        }
        cout << endl;
    }
    
    return 0;
}