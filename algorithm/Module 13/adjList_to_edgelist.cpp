#include <bits/stdc++.h>
using namespace std;
class edge
{
public:
    int u, v, w;
    edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
int main()
{
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> v[n];
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    vector<edge> edgelist;

    for (int i = 0; i < n; i++)
    {
        for (pair<int, int> child : v[i])
        {
            int childnode = child.first;
            int cost = child.second;
            edgelist.push_back(edge{i, childnode, cost});
        }
    }

    for (edge ed : edgelist)
    {
        cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }
    
    return 0;
}