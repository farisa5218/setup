#include <bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool subset(int n, int a[], int sum)
{
    if (n == 0)
    {
        if (sum == 0)
            return true;
        else
            return false;
    }

    if (dp[n][sum] != -1)
    {
        return dp[n][sum];
    }
    if (a[n - 1] <= sum)
    {
        int op1 = subset(n - 1, a, sum - a[n - 1]);
        int op2 = subset(n - 1, a, sum);
        return dp[n][sum] = op1 || op2;
    }
    else
    {
        return dp[n][sum] = subset(n - 1, a, sum);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum;
    cin >> sum;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[i][j] = -1;
        }
    }
    if (subset(n, a, sum))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}