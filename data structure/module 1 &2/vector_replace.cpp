#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>x={10,20,30,40,50,20,30,20};
    replace(x.begin(),x.end(),20,100);
    //replace and find ai duita vector ar under a na tai ader 
    //likhar somoy v.replace likhle hobe na
    for(int v:x)
    {
        cout<<v<<"\n";
    }
    return 0;
}