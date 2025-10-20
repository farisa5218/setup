#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int>dp(n+1);
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<=n;i++)
        {
           dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }
      return dp[n];
    }
};
int main()
{
    //Link: https://leetcode.com/problems/min-cost-climbing-stairs/submissions/1806334666/
    return 0;
}