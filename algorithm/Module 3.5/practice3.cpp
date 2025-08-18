#include <bits/stdc++.h>
using namespace std;

int bfs(int start, vector<vector<int>> &adj, vector<bool> &visited) {
    queue<int> q;
    q.push(start);
    visited[start] = true;
    int count = 0;

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

    vector<bool> visited(n, false);
    vector<int> sizes;

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int compSize = bfs(i, adj, visited);
            sizes.push_back(compSize);
        }
    }

    sort(sizes.begin(), sizes.end());

    for (int x : sizes) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
