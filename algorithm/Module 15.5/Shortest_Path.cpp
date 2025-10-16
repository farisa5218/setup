#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
const int N = 5e4 + 5;
vector<pair<int, int>> adj[N];
int dis[N];
int par[N];
class cmp
{
public:
    bool operator()(pi a, pi b)
    {
        return a.second > b.second;
    }
};
void dijsktra(int src)
{
    priority_queue<pi, vector<pi>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pi parent = pq.top();
        pq.pop();
        int parentNode = parent.first;
        int cost = parent.second;

        for (pi child : adj[parentNode])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
                par[childNode] = parentNode;
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    int u, v;
    cin >> u >> v;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
        adj[b].push_back({a, c});
    }

    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
        par[i] = -1;
    }

    dijsktra(u);

    if (dis[v] == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << dis[v] << endl;
        int x = v;
        vector<int> path;
        while (x != -1)
        {
            path.push_back(x);
            x = par[x];
        }
        reverse(path.begin(), path.end());
        for (int val : path)
        {
            cout << val << " ";
        }
    }

    return 0;
}

//Link: https://eolymp.com/en/problems/4856