#include <bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
const int N = 1e3 + 5;
char a[N][N];
bool vis[N][N];
pi parent[N][N];
vector<pi> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool found=false;
int si, sj, di, dj;
bool valid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < m)
    {
        return true;
    }
    return false;
}
void bfs(int si, int sj,int di,int dj)
{
    queue<pi> q;
    q.push({si, sj});
    vis[si][sj] = true;
    parent[si][sj]={-1,-1};
    while (!q.empty())
    {
        pi par = q.front();
        q.pop();
        int si = par.first;
        int sj = par.second;

        for (int i = 0; i < 4; i++)
        {
            int ci=si+d[i].first;
            int cj=sj+d[i].second;

            if(valid(ci,cj) && !vis[ci][cj] && ( a[ci][cj]=='.' ||  a[ci][cj]=='D'))
            {
                vis[ci][cj]=true;
                q.push({ci,cj});
                parent[ci][cj]={si,sj};
            }
            if(ci==di && cj==dj)
            {
                found=true;
                return;
            }
        }
    }
}

void mark_path(int i, int j)
{
    i=di,j=dj;
    while(!(i==si && j==sj))
    {
        pi p=parent[i][j];
        if(a[i][j]!='D')
        {
            a[i][j]='X';
        }
        i=p.first;
        j=p.second;
    }
}
int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
            if (a[i][j] == 'D')
            {
                di = i;
                dj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    bfs(si, sj,di,dj);
    if(found)
    {
        mark_path(di,dj);
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}