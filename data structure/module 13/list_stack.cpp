#include<bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
    list <int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int  size()
    {
        return l.size();
    }
    int top()
    {
        return l.back();//tail thake print kore
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    MyStack st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        st.push(x);
    }  
    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}