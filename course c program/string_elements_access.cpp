#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    cout<<s[5]<<endl;
    cout<<s.at(5)<<endl;
    cout<<s.front()<<endl;
    //ai gula sob akoi sudu s.front() ata sudu first index ke ney
    cout<<s[s.size()-1]<<endl;
    cout<<s.back()<<endl;
    //s.back mane sudu ar last index ke bojai
    return 0;
}