#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>count(26,0);
    for(char c:s)
    {
        int val=c-'a';
        count[val]++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]!=0)
        {
            cout<<char(i+'a')<<" "<<":"<<" "<<count[i]<<endl;
        }
    }
    return 0;
}