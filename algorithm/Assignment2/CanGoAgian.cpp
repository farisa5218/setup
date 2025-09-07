#include <bits/stdc++.h>
using namespace std;
class edge
{
public:
    int u, v;
    long long c;
    edge(int u, int v, long long c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1e3 + 5;
vector<edge> edgelist;
long long int dis[N];
const long long INF = 1e15;
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        edgelist.push_back(edge(a, b, c));
    }
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }
    int s;
    cin >> s;
    dis[s] = 0;
    int t;
    cin >> t;
    for (int i = 1; i <= n; i++)
    {
        for (edge ed : edgelist)
        {
            int u = ed.u;
            int v = ed.v;
            int c = ed.c;

            if (dis[u] < INF && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    for (edge ed : edgelist)
    {
        int u = ed.u;
        int v = ed.v;
        int c = ed.c;

        if (dis[u] < INF && dis[u] + c < dis[v])
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }
    while (t--)
    {
        int des;
        cin >> des;
         if (dis[des] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[des] << endl;
        }
    }
    return 0;

    //Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-04/challenges/can-go-again
}