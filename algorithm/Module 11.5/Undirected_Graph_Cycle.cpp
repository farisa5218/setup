#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
int Group_size[N];
void DSU_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        Group_size[i] = 1;
    }
}

int DSU_Find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = DSU_Find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = DSU_Find(node1);
    int leaderB = DSU_Find(node2);
    if (leaderA == leaderB)
        return;

    if (Group_size[leaderA] > Group_size[leaderB])
    {
        par[leaderB] = leaderA;
        Group_size[leaderA] += Group_size[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        Group_size[leaderB] += Group_size[leaderA];
    }
}

bool isCycle(int V, vector<vector<int>> &edges)
{
    DSU_initialize(V);
    for (vector<int> edge : edges)
    {
        int u, v;
        u = edge[0];
        v = edge[1];
        //cout<<u<<" "<<v<<endl;
        if (DSU_Find(u) == DSU_Find(v))
        {
            return true;
        }
        else
        {
            dsu_union_by_size(u, v);
        }
    }
    return false;
}
int main()
{
    int V1 = 4, E1 = 4;
    vector<vector<int>> edges1 = {{0, 1}, {0, 2}, {2, 3}, {3, 1}};
    cout << (isCycle(V1, edges1) ? "true" : "false") << endl; // Output: true

    // Example 2
    int V2 = 4, E2 = 3;
    vector<vector<int>> edges2 = {{0, 1}, {1, 2}, {2, 3}};
    cout << (isCycle(V2, edges2) ? "true" : "false") << endl; // Output: false
    return 0;
}

//Link: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article