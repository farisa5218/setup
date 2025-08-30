#include <bits/stdc++.h>
using namespace std;
class edge
{
public:
    int u;
    int v;
    int c;
    edge(int u, int v, int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e5 + 5;
vector<edge> edgelist;
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, c;
        cin >> u >> v >> c;
        edgelist.push_back(edge(u, v, c));
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (edge ed : edgelist)
        {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;

            if (dis[u] < INT_MAX && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << i << " -> " << dis[i] << endl;
    return 0;
}