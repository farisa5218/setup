#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isSubsetSum(vector<int>& arr, int sum) {
        // code here
        int n=arr.size();
        bool dp[n+1][sum+1];
        dp[0][0]=true;
        for(int i=1;i<=sum;i++)
        {
            dp[0][i]=false;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=sum;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};
int main()
{
    //LINK: https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1?utm_medium=article&utm_campaign=bottom_sticky_on_article&utm_source=gfg
    return 0;
}