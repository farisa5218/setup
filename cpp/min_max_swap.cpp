#include <bits/stdc++.h>
using namespace std;

int main() 
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int mn,mx;
   //max and min diye declar kora jabe na because max and min akta function 
   mn=min({a,b,c,d});
   mx=max({a,b,c,d});
   //ata first breket ar modde second braket dici because variable 2 ar odik thakle ata korte hoy
   cout<<mn<<" "<<mx; 
  return 0;
}