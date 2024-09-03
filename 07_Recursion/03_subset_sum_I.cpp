#include <bits/stdc++.h>
using namespace std;

void generateSubsetSum(int ind, int sum, vector<int> &arr, vector<int> &result)
{
    if (ind == arr.size())
    {
        result.emplace_back(sum);
        return;
    }
    // take
    generateSubsetSum(ind + 1, sum + arr[ind], arr, result);
    // not take
    generateSubsetSum(ind + 1, sum, arr, result);
}

int main()
{
    vector<int> arr = {2, 3};
    vector<int> ans;
    generateSubsetSum(0, 0, arr, ans);
    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    for (int sum : ans)
    {
        cout << sum << " ";
    }
    return 0;
}