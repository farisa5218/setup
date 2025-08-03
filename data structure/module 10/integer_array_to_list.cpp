#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[5]={1,2,3,4,5};
   list<int>mylist(a,a+5);
   for (int val : mylist)
    {
        cout << val << " ";
    }
    return 0;
}