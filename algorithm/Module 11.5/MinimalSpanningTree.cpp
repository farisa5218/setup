#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int parent[N];
int group_size[N];
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

void initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node)
{
    if (parent[node] == -1)
        return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void dsu_union_by_size(int node1, int node2)
{
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if (leaderA == leaderB)
        return;

    if (group_size[leaderA] < group_size[leaderB])
    {
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
    else
    {
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
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
    initialize(n);
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
    int totalCost = 0;
    for (edge ed : edgelist)
    {
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if (leaderU == leaderV)
        {
            continue;
        }

        else
        {
            dsu_union_by_size(ed.u, ed.v);
            totalCost += ed.w;
        }
    }
    cout << totalCost << endl;
    return 0;
}
//link: https://basecamp.eolymp.com/en/problems/3835