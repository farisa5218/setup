#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, e;
    cin >> n >> e;
    ll adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = INT_MAX;
            if (i == j)
                adj[i][j] = 0;
        }
    }
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = c;
    }

    cout<<"Before path relax"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == INT_MAX)
                cout << "I" << " ";
            else
                cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                // cout << i << " " << k << " " << j << endl; cell point
                if (adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
   cout<<"After path relax"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (adj[i][j] == INT_MAX)
                cout << "I" << " ";
            else
                cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    //jodi negative cycle thake tahale source kokhno negative 
    //hobe na jodi hoy thake infinity loop hoye jabe tai 
    //atake handle korte hobe amar source hole i==j,00 11 22 33

    for(int i=0;i<n;i++)
    {
        if(adj[i][i]<0)
        {
            cout<<"cycle detected and NO Answer"<<endl;
            break;
        }
    }
    return 0;
}