#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    static const int N = 1e5 + 5;
    int par[N];
    bool vis[N];
    bool found = false;

    void dfs(int src, vector<vector<int>> &adj)
    {
        vis[src] = true;
        par[src] = true;

        for (int child : adj[src])
        {
            if (par[child])
            {
                found = true;
            }
            if (!vis[child])
            {
                dfs(child, adj);
            }
        }
        par[src] = false;
    }

    bool isCyclic(int V, vector<vector<int>> &edges)
    {
        vector<vector<int>> adj(V);

        for (auto &e : edges)
        {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
        }

        memset(vis, false, sizeof(vis));
        memset(par, false, sizeof(par));

        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfs(i, adj);
            }
        }

        if (found)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    // Link :
    return 0;
}