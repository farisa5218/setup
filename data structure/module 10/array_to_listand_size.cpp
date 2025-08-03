#include <bits/stdc++.h>
using namespace std;
int main()
{
    //list<int> mylist;
    //    cout<<mylist.size();
    list<int> list2={1,2,3,4,5};
    list<int> mylist(list2);
   for(auto it=mylist.begin();it!=mylist.end();it++)
   {
    cout<<*it<<endl;
   }

   //shortcut for loop diye o cout kora jabe
   for(int val:mylist)
   {
    cout<<val<<" ";
   }
    return 0;
}