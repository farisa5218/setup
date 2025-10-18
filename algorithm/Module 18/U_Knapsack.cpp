#include <bits/stdc++.h>
using namespace std;
const int maxN = 1000;
const int maxW = 1000;

int dp[maxN][maxW];
int knapsnack(int n, int weight[], int value[], int w)
{
    if (n < 0 || w == 0)
    {
        return 0;
    }
    if (dp[n][w] != -1)
    {
        return dp[n][w];
    }
    if (weight[n - 1] <= w)
    {
        int op1 = knapsnack(n - 1, weight, value, w - weight[n - 1]) + value[n - 1];
        int op2 = knapsnack(n - 1, weight, value, w);
        return dp[n][w] = max(op1, op2);
    }
    else
    {
        int op2 = knapsnack(n - 1, weight, value, w);
        return dp[n][w] = op2;
    }
}
int main()
{
    int n, w;
    cin >> n >> w;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i] >> value[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= w; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout << knapsnack(n, weight, value, w) << endl;

    return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U