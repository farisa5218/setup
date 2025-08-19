#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
int par[N];
bool found = false;
vector<int> adj[N];
void dfs(int parent)
{
    vis[parent] = true;
    par[parent] = true;

    for (int child : adj[parent])
    {
        if (par[child])
        {
            found = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    // kaj ses

    par[parent] = false;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        // adj[b].push_back(a); this is now directed graph
    }
    memset(vis, false, sizeof(vis));
    memset(par, false, sizeof(par));

    for (int i = 0; i < n; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    if (found)
    {
        cout << "Cycle found";
    }
    else
    {
        cout << "Cycle not found";
    }
    return 0;
}