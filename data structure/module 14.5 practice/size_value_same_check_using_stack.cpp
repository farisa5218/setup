#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int>l;
    void push(int val)
   {
      l.push_back(val);
   }
   void pop()
   {
    l.pop_back();
   }
   void top()
   {
    l.back();
   }
   int size()
   {
      return l.size();
   }
   bool empty()
   {
    return l.empty();
   }

};
int main()
{
    stack<int>s1,s2;
    int n1,n2;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        int x;
        cin>>x;
        s1.push(x);
    }
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        int x;
        cin>>x;
        s2.push(x);
    }
    bool flag=true;
    if(s1.size()!=s2.size())
    {
        flag=false;
    }
    while(!s1.empty() && !s2.empty())
    {
    if (s1.top()!=s2.top())
    {
        flag=false;
    }
    s1.pop();
    s2.pop();
    }
    if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}