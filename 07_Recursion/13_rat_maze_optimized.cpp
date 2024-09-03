#include <bits/stdc++.h>
using namespace std;

class Solution
{
    void solve(int row, int col, vector<vector<int>> &m, int n, vector<string> &ans, string path, vector<vector<int>> &vis, int drow[], int dcol[])
    {
        if (row == n - 1 && col == n - 1)
        {
            ans.emplace_back(path);
            return;
        }
        string dir = "DLRU";
        for (int i = 0; i < 4; i++)
        {
            int next_row = row + drow[i];
            int next_col = col + dcol[i];
            if (next_row >= 0 && next_col >= 0 && next_row < n && next_col < n && !vis[next_row][next_col] && m[next_row][next_col] == 1)
            {
                vis[row][col] = 1;
                solve(next_row, next_col, m, n, ans, path + dir[i], vis, drow, dcol);
                vis[row][col] = 0;
            }
        }
    }

public:
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        vector<string> ans;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        int drow[] = {1, 0, 0, -1};
        int dcol[] = {0, -1, 1, 0};
        if (m[0][0] == 1)   // very important
            solve(0, 0, m, n, ans, "", vis, drow, dcol);
        return ans;
    }
};

int main()
{

    return 0;
}