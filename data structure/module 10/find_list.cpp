#include<bits/stdc++.h>
using namespace std;
int main()
{
   list<int>mylist={1,2,3,4,5,6,7,8};
   auto it=find(mylist.begin(),mylist.end(),6);
   if(it!=mylist.end()) 
   {
    cout<<"FOUND"<<endl;
   }
   else
   {
    cout<<"NOT FOUND"<<endl;
   }
    return 0;
}