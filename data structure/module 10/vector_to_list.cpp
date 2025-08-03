#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {100, 200, 300};
    list<int> mylist(v.begin(), v.end());
    for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}