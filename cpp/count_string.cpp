#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    int count[26]={0};
    while(cin>>s)
    {
        for(int i=0;i<strlen(s);i++)
        {
            int value=s[i]-'a';
            count[value]++;
        }
         for(int i=0;i<strlen(s);i++)
        {
            int value=count[i]+'a'
            cout<<value;
        }
        
    }
   
    return 0;
}