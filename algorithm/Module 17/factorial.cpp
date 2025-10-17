#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    int chotoFact = fact(n - 1);
    return n * chotoFact;
}
int main()
{
    int n;
    cin >> n;
    // cout<<fact(n)<<endl; 2nd way
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout << ans << endl;
    return 0;
}