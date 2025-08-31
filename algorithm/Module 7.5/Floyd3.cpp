#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main()
{
    int n;
    cin >> n;
    int adj[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> adj[i][j];
            if (adj[i][j] == -1 && i != j)
                adj[i][j] = INF;
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] < INF && adj[k][j] < INF && adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = (adj[i][k] + adj[k][j]);
                }
            }
        }
    }

    // find maximum shortest path
    
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && adj[i][j] < INF)
            {
                ans = max(ans, adj[i][j]);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
