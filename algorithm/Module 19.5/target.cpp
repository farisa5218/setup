#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int findTargetSumWays(vector<int> &a, int target)
    {
        int n = a.size();
        int sum = 0;
        int s;
        for (int val : a)
            sum += val;
        if ((sum + target) % 2 == 1 or abs(target) > sum)
// abs(target)>sum for some testcase like sum = 100 and target  = -200 here no solution exists
            return 0;
        s = (sum + target) / 2;
        int dp[n + 1][s + 1];
        dp[0][0] = 1;
        for (int i = 1; i <= s; i++)
            dp[0][i] = 0;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                if (a[i - 1] <= j)
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - a[i - 1]];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n][s];
    }
};
int main()
{
    //Link: https://leetcode.com/problems/target-sum/
    return 0;
}