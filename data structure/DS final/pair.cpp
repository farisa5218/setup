#include <bits/stdc++.h>
using namespace std;
#define pi pair<string, int>

bool cmp(pi a, pi b)
{
    if (a.first != b.first)
    {
        return a.first < b.first;
    }
    else
    {
        return a.second > b.second;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<pi> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        int x;
        cin >> s >> x;
        v.push_back({s, x});
    }
    sort(v.begin(), v.end(), cmp);
    for (pi val : v)
    {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}