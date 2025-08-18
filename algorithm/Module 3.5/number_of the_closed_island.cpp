#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n,m;
  
    vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};

     bool dfs(vector<vector<int>>& grid, int r, int c) 
     {
        if (r < 0 || c < 0 || r >= n || c >= m) 
        {
            return false;
        }

        if(grid[r][c]==1)
        {
            return true;
        }

        grid[r][c]=1;
        bool result=true;

       for(int i=0;i<4;i++)
       {
      bool res=dfs(grid,r+d[i].first,c+d[i].second);
        if(!res) result= false;
       }
       return result;
     }
    int closedIsland(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        int c=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                    if(dfs(grid,i,j)==true)
                {
                    c++;
                }
                }
            }
        }
        return c;
    }
};
int main()
{
    //link: https://leetcode.com/problems/number-of-closed-islands/description/
    return 0;
}