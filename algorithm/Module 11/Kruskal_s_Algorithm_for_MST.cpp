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
const int N = 1e5 + 5;
int parent[N];
int group_size[N];

int DSU_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int DSU_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = DSU_find(parent[node]);
    parent[node] = leader;
    return leader;
}
int union_by_groupSize(int node1, int node2)
{
    int leaderA = DSU_find(node1);
    int leaderB = DSU_find(node2);
    if (group_size[leaderA] > group_size[leaderB])
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}
bool cmp(edge a, edge b)
{
    return a.w < b.w;
}
int main()
{
    int n, e;
    cin >> n >> e;
    DSU_initialize(n);
    vector<edge> edgelist;
    while (e--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edgelist.push_back(edge{u, v, w});
    }
    sort(edgelist.begin(), edgelist.end(), cmp);

    // for(edge ed :edgelist)
    // {
    //     cout<<ed.u<<" "<<ed.v<<" "<<ed.w<<endl;
    // }
    int TotalCost = 0;
    vector<edge> v;
    for (edge ed : edgelist)
    {
        int leaderU = DSU_find(ed.u);
        int leaderV = DSU_find(ed.v);
        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            union_by_groupSize(ed.u, ed.v);
            v.push_back(edge{ed.u, ed.v, ed.w});
            TotalCost += ed.w;
        }
    }

    for (edge ed : v)
    {
        cout << ed.u << " " << ed.v << " " << ed.w << endl;
    }

    cout << TotalCost << endl;
    return 0;
}


// Input: 5 7                  output:  
//        0 1 2                        0 1 2
//        0 2 3                        0 2 3
//        0 3 3                        0 3 3
//        3 4 6                        2 4 4
//        2 4 4                        12
//        2 1 7
//        1 4 5