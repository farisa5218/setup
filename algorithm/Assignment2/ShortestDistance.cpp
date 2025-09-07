#include <bits/stdc++.h>
#define ll long long
using namespace std;
const long long INF = 1e18;
const int MAXN = 505;
ll adj[MAXN][MAXN];
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                adj[i][j] = 0;
            else
                adj[i][j] = INF;
        }
    }
    while (e--)
    {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        if (c < adj[a][b])
        {
            adj[a][b] = c;
        }
    }
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (adj[i][k] != INF && adj[k][j] != INF && (adj[i][k] + adj[k][j]) < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        int u, v;
        cin >> u >> v;
        if (adj[u][v] >= INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << adj[u][v] << endl;
        }
    }

    return 0;
}

//Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-04/challenges/shortest-distance-2