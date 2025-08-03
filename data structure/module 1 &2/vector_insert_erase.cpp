#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>x={10,78,67};
    v.erase(v.begin()+1,v.end()-1);
    v.insert(v.begin()+1,x.begin(),x.end());
    for(int x2:v)
    {
        cout<<x2<<endl;
    }
    return 0;
}