#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int parent[N];
int group_size[N];

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
        group_size[i] = 1;
    }
}
int find(int node)
{
    if (parent[node] == node)
        return node;
    int leader = find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2)
{
    int leaderA = find(node1);
    int leaderB = find(node2);
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

int main()
{
    int n;
    cin >> n;

    dsu_initialize(n);

    vector<pair<int, int>> remove_list;

    vector<pair<int, int>> input_edges;
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        input_edges.push_back({u, v});
        if (find(u) == find(v))
        {
            remove_list.push_back({u, v});
        }
        else
        {
            dsu_union_by_size(u, v);
        }
    }

    for (int i = 1; i <= n; i++)
        parent[i] = i;

    for (auto [u, v] : input_edges)
    {
        if (find(u) != find(v))
        {
            dsu_union_by_size(u, v);
        }
    }

    vector<pair<int, int>> add_list;

    for (int i = 2; i <= n; i++)
    {
        if (find(1) != find(i))
        {
            dsu_union_by_size(1, i);
            add_list.push_back({1, i});
        }
    }

    int t = add_list.size();
    cout << t << "\n";

    for (int i = 0; i < t; i++)
    {
        cout << remove_list[i].first << " " << remove_list[i].second << " "
             << add_list[i].first << " " << add_list[i].second << "\n";
    }

    return 0;
}

//Link: https://codeforces.com/problemset/problem/25/D