#include<bits/stdc++.h>
using namespace std;

bool cmp(vector<int>& a, vector<int>& b) 
{
    return a[2] < b[2];
}

class Solution {
  public:
    static const int N = 1e3 + 5;
    int parent[N];
    int group_size[N];

    void DSU_initialize(int n) {
        for (int i = 0; i < n; i++) {
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

    int spanningTree(int V, vector<vector<int>>& edges) {
        DSU_initialize(V);
        sort(edges.begin(), edges.end(), cmp); 

        int mstWeight = 0;
        for (auto& edge : edges) 
        {
            int u = edge[0], v = edge[1], w = edge[2];
            int leaderU = DSU_find(u);
            int leaderV = DSU_find(v);
        if (leaderU == leaderV)
        {
            continue;
        }
        else
        {
            union_by_groupSize(u,v);
            mstWeight += w;
        }
        }

        return mstWeight;
    }
};

int main()
{
    
    return 0;
}

//Link: https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab