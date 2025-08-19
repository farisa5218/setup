#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
int par[N];
bool found = false;
vector<int> adj[N];

void dfs(int parent)
{
    //cout << parent << endl;
    vis[parent] = true;
    for (int child : adj[parent])
    {

        if (vis[child] && par[parent] != child)
            found = true;
        if (!vis[child])
        {
            par[child] = parent;
            dfs(child);
        }
    }
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
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));

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