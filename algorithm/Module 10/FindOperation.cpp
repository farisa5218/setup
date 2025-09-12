#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int par[N];
void DSU_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
    }
    par[1] = 3;
    par[2] = 1;
    // cout << par[0] << endl;
    // cout << par[1] << endl;
    // cout << par[2] << endl;
    // cout << par[3] << endl;
}

int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}
int main()
{
    DSU_initialize(4);
    cout << find(0) << endl;
    cout << find(1) << endl;
    cout << find(2) << endl;
    cout << find(3) << endl;
    //https://cp-algorithms.com/data_structures/disjoint_set_union.html
    return 0;
}