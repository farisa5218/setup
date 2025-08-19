#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
bool vis[N];
int par[N];
bool found = false;
vector<int> adj[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {

        int parent = q.front();
        q.pop();

        // cout << parent << endl;

        for (int child : adj[parent])
        {
            if (vis[child] && par[parent] != child)
                found = true;
            if (!vis[child])
            {
                vis[child] = true;
                par[child] = parent;
                q.push(child);
            }
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
            bfs(i);
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