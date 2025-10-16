#include <bits/stdc++.h>
using namespace std;
const int N = 5e4 + 5;
vector<int> v[N];
bool vis[N];
int dis[N];
int par[N];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : v[parent])
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
                par[child] = parent;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    int u, w;
    cin >> u >> w;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    bfs(u);
    vector<int> path;
    int x = w;
    if (!vis[w])
    {
        cout << -1 << endl;
        return 0;
    }
    while (x != -1)
    {
        path.push_back(x);
        x = par[x];
    }
    cout << path.size()-1 << endl;
    reverse(path.begin(), path.end());
    for (int val : path)
    {
        cout << val << " ";
    }
    return 0;
}

//Link: https://eolymp.com/en/problems/4853