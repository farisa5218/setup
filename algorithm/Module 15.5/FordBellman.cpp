#include <bits/stdc++.h>
using namespace std;
class edge
{
public:
    int a, b, c;
    edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
const int N = 3e4 + 5;
vector<edge> edgelist;
int dis[N];
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgelist.push_back(edge(u, v, w));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = 30000;
    }
    dis[1] = 0;
    for (int i = 1; i <= n-1; i++)
    {
        for (edge ed : edgelist)
        {
            int u = ed.a;
            int v = ed.b;
            int w = ed.c;

            if (dis[u] < 30000 && dis[u] + w < dis[v])
            {
                dis[v] = dis[u] + w;
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout <<  dis[i] << " ";
    }
    return 0;
}

//Link: https://eolymp.com/en/problems/1453