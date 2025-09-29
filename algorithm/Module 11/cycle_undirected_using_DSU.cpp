#include <bits/stdc++.h>
using namespace std;
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
int main()
{
    int n, e;
    cin >> n >> e;
    DSU_initialize(n);
    bool cycle = false;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = DSU_find(a);
        int leaderB = DSU_find(b);
        if (leaderA == leaderB)
        {
            cycle = true;
        }
        else
        {
            union_by_groupSize(a, b);
        }
    }

    if (cycle)
        cout << "Cycle Found" << endl;
    else
        cout << "Cycle not Found" << endl;
    return 0;
}


// input: 4 3       
//        0 1      output: Cycle not Found
//        0 2
//        0 3


// input: 6 6
//        0 1
//        0 2
//        0 3       Output: Cycle Found
//        3 4
//        3 5
//        4 5