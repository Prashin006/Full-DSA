#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int> &arr)
    {
        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                if (arr[i] > arr[j])
                {
                    count += 1;
                }
            }
        }
        return count;
    }
};

int main()
{
    vector<int> arr = {5, 3, 4, 2, 1};
    Solution obj;
    int count = obj.solve(arr);
    cout << count << endl;
    return 0;
}