#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string>q;
   int t;
   cin>>t;
   getchar();
   while(t--)
   {
    char command;
    cin>>command;
    getchar();
    if(command=='0')
    {
        string s;
        getline(cin,s);
        q.push(s);
    }
    else if(command=='1')
    {
        if(q.empty())
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            cout<<q.front()<<endl;
            q.pop();
        }
    }
   } 
    return 0;
}