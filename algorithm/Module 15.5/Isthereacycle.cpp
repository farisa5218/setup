#include <bits/stdc++.h>
using namespace std;
const int N = 55;
vector<int> v[N];
bool vis[N];
int par[N];
bool cycle = false;

void dfs(int s)
{
    vis[s] = true;
    par[s] = true;
    for (int child : v[s])
    {
        if (par[child])
        {
            cycle = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
    par[s] = false;
}
int main()
{
    int n;
    cin >> n;
    int mat[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 1)
            {
                v[i].push_back(j);
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(par, false, sizeof(par));
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            dfs(i);
        }
    }
    if (cycle)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}
//Link: https://eolymp.com/en/problems/4004