#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pi pair<ll, ll>
class edge
{
public:
    ll u, v, w;
    edge(ll u, ll v, ll w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
const int N = 1e5 + 5;
ll parent[N];
ll group_size[N];

void DSU_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int DSU_find(ll node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    ll leader = DSU_find(parent[node]);
    parent[node] = leader;
    return leader;
}
void union_by_groupSize(ll node1, ll node2)
{
    ll leaderA = DSU_find(node1);
    ll leaderB = DSU_find(node2);
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
    ll n, e;
    cin >> n >> e;
    DSU_initialize(n);
    int x=e;
    vector<edge> edgelist;
    while (x--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        edgelist.push_back(edge{u, v, w});
    }
    sort(edgelist.begin(), edgelist.end(), cmp);
    ll TotalCost = 0;
    int edgeUsed = 0;
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
            TotalCost += ed.w;
            edgeUsed++;
        }
    }

    if (edgeUsed < n - 1)
    {
        cout << "Not Possible" << endl;
    }
    else
    {
        ll path;
        path = e - edgeUsed;
        cout << path << " " << TotalCost << endl;
    }
    return 0;
}
