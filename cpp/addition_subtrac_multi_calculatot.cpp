#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int x,a,b,s;
   cin>>x;
   switch(x)
   {
    case 1:
    cin>>a>>b;
    s=a+b;
    cout<<a<<"+"<<b<<"="<<s;
    break;
    
    case 2:
    cin>>a>>b;
    s=a-b;
   cout<<a<<"-"<<b<<"="<<s;
    break;
    
    case 3:
    cin>>a>>b;
    s=a*b;
    cout<<a<<"*"<<b<<"="<<s;
    break;
   } 
  return 0;
}