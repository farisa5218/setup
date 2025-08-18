#include<bits/stdc++.h>
using namespace std;


class Solution {
    bool vis[10000];
    vector<int>result;
  public:
  void dfsres(int src,vector<vector<int>>& adj)
  {
      result.push_back(src);
      vis[src]=true;
      
      for(int child : adj[src])
      {
          if(!vis[child])
          {
              dfsres(child,adj);
          }
      }
  }
  
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
       int n=adj.size();
       memset(vis,false,sizeof(vis));
       dfsres(0,adj);
       return result;
    }
};
int main()
{
    
    //link : https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
    return 0;
}