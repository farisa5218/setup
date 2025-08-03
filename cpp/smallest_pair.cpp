#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int mn=INT_MAX;
        int value;
       for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
        {
            value=a[i]+a[j]+(j+1)-(i+1);
             mn=min(mn,value);
        } 
        }
            cout << mn << endl;
    }
    return 0;
}