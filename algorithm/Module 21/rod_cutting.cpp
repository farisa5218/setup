#include <bits/stdc++.h>
using namespace std;
int dp[1004][1004];
int unbounded_knapsnack(int n, int w, int val[], int weight[])
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (weight[n - 1] <= w)
    {
        int op1 = val[n - 1] + unbounded_knapsnack(n, w - weight[n - 1], val, weight);
        int op2 = unbounded_knapsnack(n - 1, w, val, weight);
        return max(op1, op2);
    }
    else
    {
        return unbounded_knapsnack(n - 1, w, val, weight);
    }
}
int main()
{
    int n;
    cin >> n;
    int val[n], weight[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
        weight[i] = i + 1;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << unbounded_knapsnack(n, n, val, weight) << endl;
    return 0;
}