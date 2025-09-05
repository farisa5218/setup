#include<bits/stdc++.h>
using namespace std;
// User Function Template optimize version
class cmp{
      public:
      bool operator()(pair<int,int>a,pair<int,int>b)
      {
          return a.second>b.second;
      }
  };
class Solution {
  public:
  static const int N=1e5+5;
  int dis[N];
void dijsktra(int src,vector<vector<pair<int,int>>>&adj)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>pq;
    pq.push({src,0});
    dis[src]=0;
    while(!pq.empty())
    {
        pair<int,int>parent=pq.top();
        pq.pop();
        
        int node=parent.first;
        int cost=parent.second;
        
        for(pair<int,int>child :adj[node])
        {
            int childNode=child.first;
            int childCost=child.second;
            
            if(cost + childCost <dis[childNode])
            {
                dis[childNode]=cost + childCost;
                pq.push({childNode,dis[childNode]});
            }
        }
    }
}
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
    {
        // Code here
       vector<vector<pair<int,int>>>adj(V);
       for(vector<int> &e :edges)
       {
          int a=e[0],b=e[1],c=e[2];   
          adj[a].push_back({b,c});
          adj[b].push_back({a,c});
       }
       for(int i=0;i<V;i++)
       {
           dis[i]=INT_MAX;
       }
       dijsktra(src,adj);
        vector<int> ans(V);
        for (int i = 0; i < V; i++)
        {
            ans[i] = dis[i];
        }
        return ans;
    }
};
//Another way neive version
// class Solution {
//   public:
//   static const int N=1e5+5;
//   int dis[N];
// void dijsktra(int src,vector<vector<pair<int,int>>>&adj)
// {
//     queue<pair<int, int>>q;
//      q.push({src,0});
//      dis[src]=0;
//      while(!q.empty())
//      {
//         pair<int,int> parent=q.front();
//          q.pop();
         
//          int parentnode=parent.first;
//          int parentcost=parent.second;
         
//          for(pair<int,int>child :adj[parentnode])
//          {
//              int childnode=child.first;
//              int childcost=child.second;
             
//              if(parentcost + childcost < dis[childnode])
//              {
//                   dis[childnode] = parentcost + childcost;
//                   q.push({childnode,dis[childnode]});
//              }
//          }
//      }
// }
//     vector<int> dijkstra(int V, vector<vector<int>> &edges, int src)
//     {
//         // Code here
//        vector<vector<pair<int,int>>>adj(V);
//        for(vector<int> &e :edges)
//        {
//           int a=e[0],b=e[1],c=e[2];   
//           adj[a].push_back({b,c});
//           adj[b].push_back({a,c});
//        }
//        for(int i=0;i<V;i++)
//        {
//            dis[i]=INT_MAX;
//        }
//        dijsktra(src,adj);
//         vector<int> ans(V);
//         for (int i = 0; i < V; i++)
//         {
//             ans[i] = dis[i];
//         }
//         return ans;
//     }
// };
int main()
{
    //Link : https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
    return 0;
}