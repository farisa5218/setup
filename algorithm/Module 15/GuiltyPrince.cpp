#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
const int N = 25;
bool vis[N][N];
int cnt;
char a[N][N];
int valid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < m)
        return true;
    else
        return false;
}
void dfs(int si, int sj)
{
    vis[si][sj] = true;
    cnt++;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;

        if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] == '.')
        {
            dfs(ci, cj);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int cs = 1;
    while (t--)
    {
        cin >> m >> n;
        int si, sj;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == '@')
                {
                    si = i, sj = j;
                }
            }
        }
        memset(vis, false, sizeof(vis));
        cnt = 0;
        dfs(si, sj);
        cout << "case " << cs++ << ": " << cnt << endl;
    }
    return 0;
}

// input:                       output:
// 2                                   case 1: 45
// 6 9                                 case 2: 59
// ....#.
// ......
// ......
// ......
// ......
// ......
// ......
// #@...#
// .#..#.
// 11 9
// .#.........
// .#.#######.
// .#.#.....#.
// .#.#.###.#.
// .#.#..@#.#.
// .#.#####.#.
// .#.......#.
// .#########.
// ...........