#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
     static const int N=1e5+5;
    bool vis[N];
    int par[N];
    bool found=false;
    vector<int>adj[N];
    void dfs(int src)
    {
        vis[src]=true;
        for(int child : adj[src])
        {
            if(vis[child] && par[src] != child)
            {
                found=true;
            }
            if(!vis[child])
            {
                par[child]=src;
                dfs(child);
            }
        }
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        
        for (vector<int> &e : edges) {
            int u = e[0], v = e[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        memset(vis, false, sizeof(vis));
        memset(par, -1, sizeof(par));
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i);
            }
        }

        return found;
    }
};
int main()
{
    //Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

    return 0;
}