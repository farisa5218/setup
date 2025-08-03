#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n,mx;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   mx=max({mx,a[i]});
   }
   cout<<mx;
  return 0;
}