#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        int n;
        cin >> n;
        vector<long long> coins(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> coins[i];
        }
        if (n == 0)
        {
            cout << "Case " << i << ": 0\n";
            continue;
        }
        vector<long long> dp(n);
        dp[0] = coins[0];
        if (n > 1)
            dp[1] = max(coins[0], coins[1]);
        for (int i = 2; i < n; ++i)
        {
            dp[i] = max(dp[i - 1], coins[i] + dp[i - 2]);
        }

        cout << "Case " << i << ": " << dp[n - 1] << endl;
    }
    return 0;
}