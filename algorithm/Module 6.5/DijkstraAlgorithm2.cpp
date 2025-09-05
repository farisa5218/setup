#include <bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<pair<int, int>> adj[N];
int dis[N];

void dijsktra(int s1,int s2)
{
    queue<pair<int, int>> q;
    q.push({s1, 0});
    dis[s1] = 0;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        int node = parent.first;
        int cost = parent.second;

        for (pair<int, int> child : adj[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (cost + childCost < dis[childNode])
            {
                dis[childNode] = cost + childCost;
                q.push({childNode, dis[childNode]});
            }
        }
    }
}
int main()
{
    int n, s1, s2;
    cin >> n >> s1 >> s2;
    int mat[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int u = i, v = j, w = mat[i][j];
            if (i != j && mat[i][j] != -1)
            {
              adj[i].push_back({j,w});
            }
        }
    }

     for (int i = 1; i <=n; i++)
    {
        dis[i] = INT_MAX;
    }

    dijsktra(s1,s2);

    if (dis[s2] == INT_MAX)
        cout << -1 << endl;
    else
        cout << dis[s2] << endl;
    return 0;
}
//Link: https://basecamp.eolymp.com/en/problems/1365 

//input :
        //    4 1 4
        //    0 3 -1 -1
        //   -1 0 5 -1
        //   -1 -1 0 -1
        //   -1 -1 -1 0

//output: -1