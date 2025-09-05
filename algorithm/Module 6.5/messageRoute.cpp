#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
vector<int> adj[N];
int parent[N];
bool vis[N];

void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    parent[src] = -1;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v : adj[u])
        {
            if (!vis[v])
            {
                vis[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    bfs(1);

    if (!vis[n])
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    vector<int> path;
    for (int cur = n; cur != -1; cur = parent[cur])
    {
        path.push_back(cur);
    }
    reverse(path.begin(), path.end());

    cout << path.size() << "\n";
    for (int node : path)
        cout << node << " ";

    return 0;
}