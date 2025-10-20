#include <bits/stdc++.h>
using namespace std;
bool canReach(long long int cur, long long n)
{
    if (cur == n)
        return true;
    if (cur > n)
        return false;

    return canReach(cur * 10, n) || canReach(cur * 20, n);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        if (canReach(1, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}