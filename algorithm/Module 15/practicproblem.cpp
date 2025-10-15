#include <bits/stdc++.h>
using namespace std;
const int N = 35;
char a[N][N];
bool vis[N][N];
int dis_of_R[N][N];
int dis_of_D[N][N];
int n;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int valid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < n)
        return true;
    return false;
}
void bfs(int si, int sj, int track)
{
    memset(vis, false, sizeof(vis));
    queue<pair<int, int>> q;
    q.push({si, sj});
    if (track == 1)
    {
        vis[si][sj] = true;
        dis_of_R[si][sj] = 0;
    }
    else
    {
        vis[si][sj] = true;
        dis_of_D[si][sj] = 0;
    }

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int si = par.first, sj = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != 'O')
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                if (track == 1)
                {
                    dis_of_R[ci][cj] = dis_of_R[si][sj] + 1;
                }
                else
                {
                    dis_of_D[ci][cj] = dis_of_D[si][sj] + 1;
                }
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int si, sj, ri, rj, di, dj;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'M')
                {
                    si = i, sj = j;
                }
                if (a[i][j] == 'R')
                {
                    ri = i, rj = j;
                }
                if (a[i][j] == 'D')
                {
                    di = i, dj = j;
                }
            }
        }

        memset(dis_of_R, -1, sizeof(dis_of_R));
        memset(dis_of_D, -1, sizeof(dis_of_D));

        bfs(si, sj, 1);
        bfs(ri, rj, 2);

        int total_distance;
        if (dis_of_R[ri][rj] == -1 || dis_of_D[di][dj] == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            total_distance = dis_of_R[ri][rj] + dis_of_D[di][dj];
            cout << total_distance << endl;
        }
    }
    return 0;
}

//input:                                    output:
// 2                                               7
// 4                                               -1
// O O R O
// O T T O
// O T T D
// O M T O
// 4
// O O R O
// T O O D
// O M T O
// O O O O