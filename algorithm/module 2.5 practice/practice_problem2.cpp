#include <bits/stdc++.h>
using namespace std;
vector<int> v[100001];
int level[100001];
bool visited[100001];

void bfs(int src)
{

    queue<int> q;
    q.push(src);
    ;
    visited[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (auto child : v[parent])
        {
            if (!visited[child])
            {
                visited[child] = true;
                level[child] = level[parent] + 1;
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

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    int lev;
    cin >> lev;
    bfs(0);

    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (level[i] == lev)
        {
            result.push_back(i);
            
        }
    }

    reverse(result.begin(), result.end());

    for (int node : result)
    {
        cout << node << " ";
    }

    return 0;
}