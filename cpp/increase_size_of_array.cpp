#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int n;
   cin>>n;
   int *a=new int[n];
   int*b=new int[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
    b[i]=a[i];
   } 
   delete[]a;
   int m;
   cin>>m;
   a=new int[m];
   for(int i=0;i<m;i++)
   {
    a[i]=b[i];
   }
   delete[]b;
    a[n]=60;
    a[n+1]=70;
    a[n+2]=80;
    a[n+3]=90;
    a[n+4]=100;
    for(int i=0;i<m;i++)
    {
        cout<<a[i]<<" ";
    }
  return 0;
}