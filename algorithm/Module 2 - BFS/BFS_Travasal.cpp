#include <bits/stdc++.h>
using namespace std;
vector<int> v[100001];
bool visited[100001];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src]=true;
    while(!q.empty())
    {
        int parent= q.front();
        q.pop();
        cout<< parent << endl;;
        for(int child : v[parent])
        {
            if(!visited[child]) //jodi false hoy     
            {
                visited[child]=true;
                q.push(child);
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
    bfs(src);
    return 0;
}