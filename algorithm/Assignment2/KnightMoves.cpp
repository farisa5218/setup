#include <bits/stdc++.h>
using namespace std;
int n, m;
bool vis[100][100];
int dis[100][100];
vector<pair<int, int>> d = {{-2, -1}, {-1, -2}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {1, -2}, {2, -1}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

int bfs(int si, int sj, int qi, int qj)
{
    memset(vis, false, sizeof(vis));
    memset(dis, -1, sizeof(dis));

    queue<pair<int, int>> q;
    q.push({si, sj});
    dis[si][sj] = 0;
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int a = par.first, b = par.second;

        if (a == qi && b == qj)
            return dis[a][b];

        for (int i = 0; i < 8; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if (valid(ci, cj) == true && vis[ci][cj] == false)
            {

                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
                q.push({ci, cj});
            }
        }
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        int ki, kj, qi, qj;
        cin >> ki >> kj;
        cin >> qi >> qj;
        int ans = bfs(ki, kj, qi, qj);
        cout << ans << endl;
    }
    return 0;
}
//Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-04/challenges/knight-moves-2

//Link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-04/challenges