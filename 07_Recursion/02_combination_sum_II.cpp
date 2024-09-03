#include <bits/stdc++.h>
using namespace std;

void findCombination(int ind, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (target == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = ind; i < arr.size(); i++)
    {
        if (i > ind && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > target)
            break;
        ds.emplace_back(arr[i]);
        findCombination(i + 1, target - arr[i], arr, ans, ds);
        ds.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &arr, int target)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination(0, target, arr, ans, ds);
    return ans;
}

int main()
{
    vector<int> nums = {1, 2, 1, 1, 2};
    int target = 4;
    vector<vector<int>> ans = combinationSum2(nums, target);
    cout << ans.size() << endl;
    for (vector<int> it : ans)
    {
        for (int num : it)
        {
            cout << num << " ";
        }
        cout << "\n";
    }
    return 0;
}