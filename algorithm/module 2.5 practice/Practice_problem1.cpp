#include <bits/stdc++.h>
using namespace std;
vector<int> v[100001];
bool visited[10001];
// int level[10001];
int par[10001];
int bfs(int src, int des)
{
    memset(visited, false, sizeof(visited));
    memset(par, -1, sizeof(par));
    queue<int> q;
    q.push(src);
    visited[src] = true;
    // level[src] = 0;
    par[src] = 0; // Initialize the parent of the source node
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for (auto child : v[parent])
        {
            if (!visited[child])
            {
                visited[child] = true;
                // level[child] = level[parent] + 1;
                par[child] = par[parent] + 1;
                q.push(child);
            }
        }
    }
    return par[des]; // Return the distance from src to des
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

    // memset(level, -1, sizeof(level));

    int t;
    cin >> t;
    while (t--)
    {
        // memset(visited, false, sizeof(visited));
        // memset(par, -1, sizeof(par)); hoi amake memset akhnae dite hobe r nahole function er moddhe dite hobe nahole kaj korbe na 
        int src, des;
        cin >> src >> des;
        int result = bfs(src, des);
        cout << result << endl;
    }
    return 0;
}