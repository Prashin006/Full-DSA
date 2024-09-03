// WILL HAVE TO REVISE THIS CONCEPT AS THE CODE IS WRITTEN WHEN I DID NOT KNOW ABOUT HOW TO REPRESENT GRAPHS
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool isSafe(int node, int color[], bool graph[101][101], int n, int col)
    {
        for (int k = 0; k < n; k++)
        {
            if (k != node && graph[k][node] == 1 && color[k] == col)
                return false;
        }
        return true;
    }
    bool solve(int node, int color[], int m, int N, bool graph[101][101])
    {
        if (node == N)
        {
            return true;
        }
        for (int i = 0; i <= m; i++)
        {
            if (isSafe(node, color, graph, N, i))
            {
                color[node] = i;
                if (solve(node + 1, color, m, N, graph))
                    return true;
                color[node] = 0;
            }
        }
        return false;
    }

public:
    // function to determine if graph can be colored with at most M colors such that no two adjacent vertices of graph are colored with same color
    bool graphColoring(bool graph[101][101], int m, int N)
    {
        int color[N] = {0};
        if (solve(0, color, m, N, graph))
            return true;
        return false;
    }
};

int main()
{

    return 0;
}