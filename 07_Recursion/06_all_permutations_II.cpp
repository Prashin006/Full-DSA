#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void recurPermute(int ind, vector<int> &arr, vector<vector<int>> &ans)
    {
        if (ind == arr.size())
        {
            ans.push_back(arr);
            return;
        }
        for (int i = ind; i < arr.size(); i++)
        {
            swap(arr[ind], arr[i]);
            recurPermute(ind + 1, arr, ans);
            swap(arr[ind], arr[i]);
        }
    }

public:
    vector<vector<int>> permute(vector<int> &arr)
    {
        vector<vector<int>> ans;
        recurPermute(0, arr, ans);
        return ans;
    }
};
int main()
{
    vector<int> nums = {1, 2, 3};
    Solution obj;
    vector<vector<int>> result;
    result = obj.permute(nums);
    cout << result.size() << endl;
    for (auto num : result)
    {
        for (int n : num)
        {
            cout << n << " ";
        }
        cout << "\n";
    }
    return 0;
}