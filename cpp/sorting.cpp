#include <bits/stdc++.h>
using namespace std;
int main() 
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
   int tem;
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
   {
    if(a[i]>a[j])
    {
        tem=a[i];
        a[i]=a[j];
        a[j]=tem;
    }
   }
   }
   for(int i=0;i<n;i++)
   {
     cout<<" "<<a[i]<<endl;
   }

  return 0;
}