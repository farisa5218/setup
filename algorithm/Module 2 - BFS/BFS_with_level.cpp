#include <bits/stdc++.h>
using namespace std;
vector<int> v[100001];
bool visited[100001];
int level[100001];

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
    int src;
    cin >> src;
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    bfs(src);
    for(int i=0;i<n;i++)
    {
        cout<< "Node " << i << " is at level " << level[i] << endl; // Print the level of each node
    }
    return 0;
}