#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isPalindrome(string s, int start, int end)
    {
        while (start <= end)
        {
            if (s[start++] != s[end--])
                return false;
        }
        return true;
    }
    void func(int ind, string s, vector<string> &substr, vector<vector<string>> &result)
    {
        if (ind == s.size())
        {
            result.emplace_back(substr);
            return;
        }
        for (int i = ind; i < s.size(); i++)
        {
            if (isPalindrome(s, ind, i))
            {
                substr.push_back(s.substr(ind, i));
                func(i + 1, s, substr, result);
                substr.pop_back();
            }
        }
    }

public:
    vector<vector<string>> solve(string s)
    {
        vector<vector<string>> result;
        vector<string> ds;
        func(0, s, ds, result);
        return result;
    }
};

int main()
{
    string s = "aabb";
    Solution obj;
    vector<vector<string>> result;
    result = obj.solve(s);
    cout << result.size() << endl;
    return 0;
}