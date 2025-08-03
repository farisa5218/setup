#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    vector<string>v(n);
    for(int i=0;i<v.size();i++)
    {
        getline(cin,v[i]);
    }
    for(string x:v)
    {
        cout<<x<<endl;
    }
    return 0;
}
