#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 5;
long long int dis[N];
bool vis[N];
vector<pair<int, long long int>> adj[N];

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};
void dijsktra(int src, int n)
{
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    priority_queue<pair<int, long long int>, vector<pair<int, long long int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;
    while (!pq.empty())
    {
        pair<int, long long int> parent = pq.top();
        pq.pop();

        int node = parent.first;
        int cost = parent.second;

        if (cost > dis[node])
            continue;

        for (pair<int, long long int> child : adj[node])
        {
            int childNode = child.first;
            long long int childCost = child.second;

            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a].push_back({b, c});
    }
    int src;
    cin >> src;
    dijsktra(src, n);
    int t;
    cin >> t;
    while (t--)
    {
        int d, cost;
        cin >> d >> cost;
        if (d >= 0 && d <= n && dis[d] <= cost)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;

    //Link:https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-04/challenges/can-go
}