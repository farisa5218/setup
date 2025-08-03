#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,6,7};
    v.pop_back();
    v.pop_back();
    //ata seser dik thake value bad dey
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}