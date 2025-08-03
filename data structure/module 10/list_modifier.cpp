#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myloist = {1, 2, 3, 4, 5};
    list<int> newlist;
    //    newlist=myloist;
    newlist.assign(myloist.begin(), myloist.end());
    // ai duitai copy kore
    for (int val : myloist)
    {
        cout << val << " ";
    }
    return 0;
}