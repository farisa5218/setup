#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int lcs(string s1, string s2, int n, int m)
{
    if (n == 0 || m == 0)
    {
        return 0;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    if (s1[n - 1] == s2[m - 1])
    {
        int ans = lcs(s1, s2, n - 1, m - 1);
        return dp[n][m] = ans + 1;
    }
    else
    {
        int ans1 = lcs(s1, s2, n - 1, m);
        int ans2 = lcs(s1, s2, n, m - 1);
        return dp[n][m] = max(ans1, ans2);
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n = s1.length();
    int m = s2.length();
    memset(dp, -1, sizeof(dp));
    cout << lcs(s1, s2, n, m) << endl;
    return 0;
}