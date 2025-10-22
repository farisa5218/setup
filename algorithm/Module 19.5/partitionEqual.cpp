#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int s = 0;
        for(int x: nums)
        {
            s+=x;
        }
        bool dp[n+1][s+1];
        dp[0][0] = true;
        int target=s/2;
        for (int i = 1; i <= target; i++) {
            dp[0][i] = false;
        }
        if (s % 2 != 0) 
        {
            return false;
        }
        for (int i = 1; i <= n; i++) 
           {
                for (int j = 0; j <= target; j++) 
                {
                    if (nums[i - 1] <= j) 
                    {
                        dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j]= dp[i-1][j];
                    }
                }
            }
        return dp[n][target];
    }
};
int main()
{
    //Link: https://leetcode.com/problems/partition-equal-subset-sum/
    return 0;
}