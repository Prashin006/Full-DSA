#include <bits/stdc++.h>
using namespace std;
void printAns(vector<vector<int>> &ans)
{
    cout << "The unique subsets are " << endl;
    cout << "[";
    for (vector<int> v : ans)
    {
        cout << "[";
        for (int num : v)
        {
            cout << num << " ";
        }
        cout << "]";
    }
    cout << "]";
}
class Solution
{
private:
    void findCombination(int ind, vector<int> &arr, vector<int> &ds, vector<vector<int>> &result)
    {
        result.emplace_back(ds);
        for (int i = ind; i < arr.size(); i++)
        {
            if (i != ind && arr[i] == arr[i - 1])
                continue;
            ds.emplace_back(arr[i]);
            findCombination(i + 1, arr, ds, result);
            ds.pop_back();
        }
    }

public:
    vector<vector<int>> subsetSum(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        vector<int> ds;
        vector<vector<int>> ans;
        findCombination(0, arr, ds, ans);
        return ans;
    }
};
int main()
{
    vector<int> arr = {1, 2, 2};
    Solution obj;
    vector<vector<int>> ans = obj.subsetSum(arr);
    printAns(ans);
    return 0;
}