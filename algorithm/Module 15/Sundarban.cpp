#include<bits/stdc++.h>
using namespace std;
int n;
char a[30][30];
bool vis[30][30];
int dis[30][30];
vector<pair<int,int> >d;
int valid(int i,int j)
{
    if(i>=0 &&i<n && j>=0 && j<n)
    return true;
    else return false;
}
void bfs(int si,int sj)
{
    queue<pair<int,int> >q;
    q.push({si,sj});
    vis[si][sj]=true;
    dis[si][sj]=0;
    while(!q.empty())
    {
        pair<int,int>  par=q.front();
        q.pop();

       for(int i=0;i<4;i++)
       {
        int ci=par.first+d[i].first;
        int cj=par.second+d[i].second;

        if(valid(ci,cj) && !vis[ci][cj] & a[ci][cj]!='T')
        {
            vis[ci][cj]=true;
            q.push({ci,cj});
            dis[ci][cj]=dis[par.first][par.second]+1;
        }
       }
    }
}
int main()
{
    d.push_back({0,1});
    d.push_back({0,-1});
    d.push_back({-1,0});
    d.push_back({1,0});
    while(cin>>n)
    {
         int si,sj;
         int di,dj;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='S')
                {
                    si=i;
                    sj=j;
                }
                if(a[i][j]=='E')
                {
                    di=i;
                    dj=j;
                }
            }
        }
        memset(dis,-1,sizeof(dis));
        memset(vis,false,sizeof(vis));
        bfs(si,sj);
        cout<<dis[di][dj]<<endl;
    }
    
    return 0;
}

//Link: https://school.outsbook.com/problems/problemsubmit/10106