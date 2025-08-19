#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 1;
int n, e;
int ai, aj, bi, bj;
char mat[N][N];
bool vis[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int c = 0;
bool valid(int i, int j)
{
    if (i < 0 || j < 0 || i >= n || j >= e)
        return false;
    return true;
}

void dfs(int si, int sj)
{

    vis[si][sj] = true;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] == '.')
        {
            c++;
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            cin >> mat[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < e; j++)
        {
            if (mat[i][j] == '.' && !vis[i][j])
            {
                c = 1;
                dfs(i, j);
                v.push_back(c);
            }
        }
    }

    if (v.empty())
    {
        cout << 0 << endl;
    }
    sort(v.begin(), v.end());
    for (int ans : v)
    {
        cout << ans << " ";
    }
    return 0;
}