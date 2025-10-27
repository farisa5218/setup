#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        bool found = false;
        while (n >= 1)
        {
            if (n == 1)
            {
                found = true;
                break;
            }
            if (n % 2 == 0)
            {
                n /= 2;
            }
            else
            {
                n-=3;
            }
        }
        if (found)
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