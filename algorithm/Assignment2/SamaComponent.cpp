#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[1000][1000];
bool vis[1000][1000];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    if (a[i][j] == '-')
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

        if (valid(ci, cj) == true && vis[ci][cj] == false)
        {
            dfs(ci, cj);
        }
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
        }
    }
    int s1, s2, d1, d2;
    cin >> s1 >> d1;
    cin >> s2 >> d2;
    memset(vis, false, sizeof(vis));
    dfs(s1,d1);
    if(vis[s2][d2]==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
          cout<<"NO"<<endl;
    }
    return 0;
    
    //Link:https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-04/challenges/same-component
}