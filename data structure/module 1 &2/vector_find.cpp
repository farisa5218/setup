#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    vector<int>x={10,20,30,40,50,20,30,20};
    auto it=find(x.begin(),x.end(),20);
    //replace and find ai duita vector ar under a na tai ader 
    //likhar somoy v.find likhle hobe na
    cout<<*it<<"\n";
    if(it==x.end()) cout<<"NOT FOUND";
    else cout<<"FOUND";
    return 0;
}