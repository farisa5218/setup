#include <bits/stdc++.h>
using namespace std;
vector<int> v[100001];
bool visited[100001];

void bfs(int src, int des)
{
    queue<pair<int, int>> q;
    q.push({src, 0}); // Push the source node with level 0
    visited[src] = true;
    bool found = false;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        int parent = p.first;
        int level = p.second;
        if (parent == des)
        {
            cout << level << endl;
            found = true;
            break; // Exit if the destination node is found
        }
        // cout<<parent<<endl;

        for (int child : v[parent])
        {
            if (!visited[child])
            {
                visited[child] = true;
                q.push({child, level+1}); // Push child with incremented level
            }
        }
    }
     if (found == false)
    {
        cout << -1 << endl;
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
    bfs(src, 6);
    // for(int i=0;i<n;i++)
    // {
    //     cout<< "Node " << i << " is at level " << level[i] << endl; // Print the level of each node
    // }
    return 0;
}