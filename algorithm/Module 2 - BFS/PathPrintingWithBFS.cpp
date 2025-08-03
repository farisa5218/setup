#include <bits/stdc++.h>
using namespace std;
vector<int> v[100001];
bool visited[100001];
int level[100001];
int par[100001];
void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src] = true;
    level[src]=0;
    while(!q.empty())
    {
        int parent=q.front();
        q.pop();

        // cout<<parent<<endl;

        for(int child : v[parent])
        {
            if(!visited[child])
            {
                visited[child]=true;
                q.push(child);
                level[child]= level[parent]+1; // Set the level of the child node
                par[child]=parent;
                // cout << "Parent of " << child << " is " << parent << endl; // Print the parent of the child node
            }
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src, des;
    cin >> src>>des;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(par,-1,sizeof(par));
    bfs(src);
    int x=des;
    vector<int> path;
    while(x!=-1)
    {
       path.push_back(x);
        x=par[x];
    }

    reverse(path.begin(), path.end());
    for(int val :path)
    {
        cout<<val<<" ";
    }
    return 0;
}