#include <bits/stdc++.h>
using namespace std;

int dp[25][200005];
int n;
long long int x;
int total=0;
int a[25];
bool Creating_Expression(int i, long long int j)
{
    int idx = j + total; 
    if (i == n)
    {
        return j == x;
    }
    if(dp[i][idx] != -1) return dp[i][idx];

    bool ans = Creating_Expression(i+1, j + a[i]) || Creating_Expression(i+1, j - a[i]);
    dp[i][idx] = ans;
    return ans;
}
int main()
{
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total+=a[i];
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= x; j++)
        {
            dp[i][j] = -1;
        }
    }
    if (Creating_Expression(0, 0))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}