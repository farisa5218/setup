#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> a;
int maximumSum(int i, int j)
{
    if (i >= n || j >= m)
        return INT_MIN;
    if (i == n-1 && j == m-1)
        return a[i][j];

    int right = maximumSum(i, j + 1);
    int down = maximumSum(i + 1, j);

    return a[i][j] + max(right, down);
}
int main()
{

    cin >> n >> m;
    a.resize(n, vector<int>(m));
    for (int i =0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << maximumSum(0, 0) << endl;
    return 0;
}