#include <bits/stdc++.h>
using namespace std;
const int N = 2 * 10e5;
vector<int> v[N];
bool vis[N];
int lastNode;
void dfs(int s)
{
    // cout<<s<<endl;
    vis[s] = true;
    lastNode = s;
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
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    vector<int> node;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {

            dfs(i);
            node.push_back(i);
        }
    }

    int extraEdge = node.size() - 1;
    cout << extraEdge << endl;

    for (int i = 0; i < extraEdge; i++)
    {
        cout << node[i] << " " << node[i + 1] << endl;
    }
    return 0;
}

//Link: https://cses.fi/problemset/task/1666

//input: 4 2         output:  1
    //   1 2                  1 3
    //   3 4