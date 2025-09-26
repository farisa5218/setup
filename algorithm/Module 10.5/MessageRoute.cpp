#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 1e5;
bool vis[N];
// int level[1005];
vector<int> v[N];
int par[N];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    // level[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (int child : v[parent])
        {
            if (!vis[child])
            {
                vis[child] = true;
                par[child] = parent;
                // level[child] = level[parent] + 1;
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
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(par, -1, sizeof(par));
    // memset(level, -1, sizeof(level));
    bfs(1);

    if (!vis[n])
    {
        cout << "IMPOSSIBLE\n";
        return 0;
    }

    vector<int> path;
    int x = n;
    while (x != -1)
    {
        path.push_back(x);
        x = par[x];
    }
    reverse(path.begin(), path.end());

    cout << path.size() << endl;
    for (int val : path)
    {
        cout << val << " ";
    }
    // cout << level[n];
    return 0;
}

//Link: https://cses.fi/problemset/task/1667