#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    vector<int>x={10,20,30,40,50};
    cout<<x.back()<<endl;
    cout<<x[x.size()-1]<<endl;
    cout<<x.front()<<endl;
    cout<<x[0]<<endl;
    for(auto it=x.begin();it<x.end();it++)
    {
        cout<<*it<<"\n";
    }
    return 0;
}