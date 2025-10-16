#include <bits/stdc++.h>
using namespace std;
const int N = 45;
char a[N][N];
bool vis[N][N];
pair<int, int> par[N][N];
int n;
vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
int valid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < n)
        return true;
    return false;
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> parent = q.front();
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = parent.first + d[i].first;
            int cj = parent.second + d[i].second;

            if (valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != 'O')
            {
                vis[ci][cj] = true;
                q.push({ci, cj});
                par[ci][cj] = {parent.first, parent.second};
            }
        }
    }
}

void mark_path(int si, int sj, int di, int dj)
{
    int i = di, j = dj;

    while (!(i == si && j == sj))
    {
        if (a[i][j] == '.' || a[i][j] == 'X')
        {
            a[i][j] = '+';
        }
        int pi = par[i][j].first;
        int pj = par[i][j].second;
        i = pi;
        j = pj;
    }
}
int main()
{
    int si, sj;
    int di, dj;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '@')
            {
                si = i, sj = j;
            }
            if (a[i][j] == 'X')
            {
                di = i, dj = j;
            }
        }
    }
    memset(par, -1, sizeof(par));
    bfs(si, sj);
    if (!vis[di][dj])
    {
        cout << "N" << endl;
        return 0;
    }
    cout << "Y" << endl;
    mark_path(si, sj, di, dj);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}

//Link:https://eolymp.com/en/problems/1060