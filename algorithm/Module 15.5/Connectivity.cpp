#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
;
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
    dfs(1);
    int flag = true;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}

//Link: https://eolymp.com/en/problems/982