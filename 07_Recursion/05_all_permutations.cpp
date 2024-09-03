#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
    void recurPermute(vector<int> &arr, vector<int> &ds, vector<vector<int>> &ans, int freq[])
    {
        if (ds.size() == arr.size())
        {
            ans.push_back(ds);
            return;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (!freq[i])
            {
                ds.push_back(arr[i]);
                freq[i] = 1;
                recurPermute(arr, ds, ans, freq);
                ds.pop_back();
                freq[i] = 0;
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        int freq[nums.size()];
        for (int i = 0; i < nums.size(); i++)
            freq[i] = 0;
        recurPermute(nums, ds, ans, freq);
        return ans;
    }
};

void printAns(vector<vector<int>> &arr)
{
    cout << "The various permutations of the array are:" << endl;
    cout << "[";
    for (auto it : arr)
    {
        cout << "[ ";
        for (int num : it)
        {
            cout << num << " ";
        }
        cout << "], ";
    }
    cout << "]";
}

int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> result;
    Solution obj;
    result = obj.permute(arr);
    cout << result.size() << endl;
    printAns(result);
    return 0;
}