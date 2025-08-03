#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
vector<int>v[N];
bool visit[N];

void dfs(int src) 
{
    cout<<src<<endl;
    visit[src] = true;
    for( auto child : v[src] )
    {
        if(!visit[child])
        {
            dfs(child);
        }
    }
}
int main()
{
    int n,e;
   cin>>n>>e;
   while(e--)
   {
    int a,b;
    cin>>a>>b;
    v[a].push_back(b);
    v[b].push_back(a);
   }

   memset(visit,false,sizeof(visit));
   int c=0;
   for(int i=0;i<7;i++)
   {
    if(visit[i]==false)
    {
        dfs(i);
        c++;
    }
   }

   cout<<"Component:-"<<c<<endl;
   
    return 0;
}