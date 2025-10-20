#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n+1);
        if (n == 0) return 0;
        if (n == 1) return nums[0];
      
        int prev2 = 0;       // dp[i - 2]
        int prev1 = nums[0]; // dp[i - 1]

        for (int i = 1; i < n; i++) {
            int curr = max(nums[i] + prev2, prev1);
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};
int main()
{
    //Link: https://leetcode.com/problems/house-robber/submissions/1806339800/
    return 0;
}