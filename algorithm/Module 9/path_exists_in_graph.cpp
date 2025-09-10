#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static const int N = (2 * 1e5) + 5;
    bool vis[N];
    vector<int> v[N];
    void dfs(int s)
    {
        vis[s] = true;
        for (int child : v[s])
        {
            if (!vis[child])
            {
                dfs(child);
            }
        }
    }
    bool validPath(int n, vector<vector<int>> &edges, int source, int d)
    {
        memset(vis, false, sizeof(vis));
        for (int i = 0; i < edges.size(); i++)
        {
            int a = edges[i][0], b = edges[i][1];
            v[a].push_back(b);
            v[b].push_back(a);
        }
        dfs(source);
        if (vis[d] == true)
            return true;
        else
            return false;
    }
};
int main()
{
    // Link: https://leetcode.com/problems/find-if-path-exists-in-graph/description/
    return 0;
}