#include <bits/stdc++.h>
using namespace std;
    class Solution
    {

    public:
        int minDifference(vector<int> &a)
        {
            // Your code goes here
            int n = a.size();
            int s = 0;
            for (int x : a)
            {
                s += x;
            }
            bool dp[n + 1][s + 1];
            dp[0][0] = true;
            for (int i = 1; i <= s; i++)
                dp[0][i] = false;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    if (a[i - 1] <= j)
                    {
                        dp[i][j] = dp[i - 1][j - a[i - 1]] || dp[i - 1][j];
                    }
                    else
                    {
                        dp[i][j] = dp[i - 1][j];
                    }
                }
            }

            vector<int> v;
            for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j <= s; j++)
                {
                    if (dp[i][j] == 1)
                        v.push_back(j);
                }
            }
            
            int ans=INT_MAX;
            for(int val:v)
            {
                int s1=val;
                int s2=s-s1;
                ans=min(ans,abs(s1-s2));
            }
            return ans;
        }
    };

int main()
{
    //Link: https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1?utm_medium=article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks
    return 0;
}