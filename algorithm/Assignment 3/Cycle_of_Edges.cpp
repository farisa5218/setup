#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
int parent[N];
int group_size[N];

void DSU_initialize(int n)
{
    for (int i = 1; i <= n; i++)
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
void union_by_groupSize(int node1, int node2)
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
    int cycle = 0;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int leaderA = DSU_find(a);
        int leaderB = DSU_find(b);

        if (leaderA == leaderB)
        {
            cycle++;
        }
        else
        {
            union_by_groupSize(a, b);
        }
    }
    cout << cycle << endl;
    return 0;
}

// Link:https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-04/challenges