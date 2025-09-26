#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
int n, m;
char a[N][N];
bool vis[N][N];
pair<int, int> parent[N][N];
char moveTaken[N][N];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
string dir = "RLUD";

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    if (a[i][j] == '#')
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int nx = x + d[k].first;
            int ny = y + d[k].second;
            if (valid(nx, ny) && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                parent[nx][ny] = {x, y};
                moveTaken[nx][ny] = dir[k];
                q.push({nx, ny});
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si, sj, ei, ej;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'A')
                si = i, sj = j;
            if (a[i][j] == 'B')
                ei = i, ej = j;
        }
    }

    memset(vis, false, sizeof(vis));
    bfs(si, sj);

    if (!vis[ei][ej])
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
        string path;
        int x = ei, y = ej;
        while (!(x == si && y == sj))
        {
            path.push_back(moveTaken[x][y]);
            tie(x, y) = parent[x][y];
        }
        reverse(path.begin(), path.end());
        cout << path.size() << "\n";
        cout << path << "\n";
    }
}
