#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
const int N = 1e3 + 5;
char a[N][N];
bool vis[N][N];
int c = 0;
int n, m;
vector<pi> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    if (i >= 1 && i <= n && j >= 1 && j <= m)
        return true;

    return false;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.')
        {
            dfs(ci,cj);
            c++;
        }
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int minarea = INT_MAX;
    bool found = false;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (!vis[i][j] && a[i][j] == '.')
            {
                c=1;
                dfs(i, j);
                minarea = min(minarea, c);
                found = true;
            }
        }
    }
    if (found == false)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minarea << endl;
    }
    return 0;
}