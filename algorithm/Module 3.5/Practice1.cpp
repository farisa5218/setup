#include <bits/stdc++.h>
using namespace std;

int bfs(int start, vector<vector<int>> &adj, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    int count = 0;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        count++;

        for (int nei : adj[node]) {
            if (!visited[nei]) {
                visited[nei] = true;
                q.push(nei);
            }
        }
    }

    return count;
}

int main() {
    int n, e;
    cin >> n >> e;

    vector<vector<int>> adj(n);

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int start;
    cin >> start;

    cout << bfs(start, adj, n) << "\n";

    return 0;
}
