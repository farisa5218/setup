#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6]={1,2,3,4,5,6};
   vector<int>v(a,a+6);
   for(int x:v)
   {
   cout<<x<<" ";
   }
    cout<<"\n"<<v.size();
    return 0;
}