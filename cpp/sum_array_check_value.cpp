#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    for(int t=0;t<test;t++)
    {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int value,sum=0;
    cin>>value;
     for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum==value)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    }
    return 0;
}