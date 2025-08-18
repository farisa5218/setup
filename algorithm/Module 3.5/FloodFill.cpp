#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int n,m;
vector<pair<int,int>>d={{0,1},{0,-1},{-1,0},{1,0}};
void dfs(vector<vector<int>>& image, int r, int c, int color,int newColor)
{
    if (r < 0 || c < 0 || r >= n || c >= m) return;

    if (image[r][c] != color) return;

        image[r][c] = newColor;
    for(auto ans : d)
    {
         dfs(image,r+ans.first,c+ans.second,color,newColor);
    }
        
    
    
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        n=image.size();
        m=image[0].size();
       
       int start= image[sr][sc];

       if(start!=color)
       {
        dfs(image,sr,sc,start,color);
       }
       return image;
    }
};
int main()
{
    //link: https://leetcode.com/problems/flood-fill/description/
    return 0;
}