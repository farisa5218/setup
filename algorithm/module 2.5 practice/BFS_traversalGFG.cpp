bool visited[10001];

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        vector<int>v;
        memset(visited,false,sizeof(visited));
        int src=0;
        queue<int>q;
        q.push(src);
        visited[src]=true;
        while(!q.empty())
        {
            int parent=q.front();
            q.pop();
            
            v.push_back(parent);
            
            for(child : adj[parent])
            {
                if(!visited[child])
                {
                    visited[child]=true;
                    q.push(child);
                }
            }
        }
        
        return v;
    }
};

https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab