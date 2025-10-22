#include<bits/stdc++.h>
using namespace std;
int findWays(vector<int>& arr, int k)
{
	// Write your code here.
	 int n=arr.size();
      const int MOD = 1e9 + 7;
        long long int dp[n+1][k+1];
        dp[0][0]=1;
        for(int i=1;i<=k;i++)
        {
            dp[0][i]=0;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=k;j++)
            {
                if(arr[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j-arr[i-1]] + dp[i-1][j])%MOD;

                }
                else
                {
                    dp[i][j]=(dp[i-1][j])%MOD;
                }
            }
        }
        return dp[n][k];
    
}

int main()
{
    //Link:https://www.naukri.com/code360/problems/number-of-subsets_3952532?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTabValue=PROBLEM
    return 0;
}