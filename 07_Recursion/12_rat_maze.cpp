#include <bits/stdc++.h>
using namespace std;

class Solution{
    void solve(int row, int col, vector<vector<int>>& m, int n,vector<string>& ans, string path, vector<vector<int>>& vis){
        if(row == n-1 && col == n-1){
            ans.emplace_back(path);
            return;
        }
        // Down
        if(row + 1 < n && !vis[row+1][col] && m[row+1][col] == 1){
            vis[row][col] = 1;
            path += "D";
            solve(row+1,col,m,n,ans,path,vis);
            vis[row][col] = 0;
        }
        // Left 
        if(col - 1 >= 0 && !vis[row][col-1] && m[row][col-1] == 1){
            vis[row][col] = 1;
            path += "L";
            solve(row,col-1,m,n,ans,path,vis);
            vis[row][col] = 0;
        }
        // Right
        if(col + 1 < n && !vis[row][col+1] && m[row][col+1] == 1){
            vis[row][col] = 1;
            path += "R";
            solve(row,col+1,m,n,ans,path,vis);
            vis[row][col] = 0;
        }
        // Up
        if(row - 1 >= 0 && !vis[row-1][col] && m[row-1][col] == 1){
            vis[row][col] = 1;
            path += "U";
            solve(row-1,col,m,n,ans,path,vis);
            vis[row][col] = 0;
        }
    }
public:
    vector<string> findPath(vector<vector<int>>& m, int n){
        vector<string> ans;
        vector<vector<int>> vis (n, vector<int> (n,0));
        if(m[0][0] == 1) solve(0,0,m,n,ans,"",vis);
        return ans;
    }
};

int main()
{
    
    return 0;
}