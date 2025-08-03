#include<bits/stdc++.h>
using namespace std;
class MyQueue
{
    public:
    list<int>q;
    void push(int val)
    {
        q.push_back(val);
    }
    void pop()
    {
        q.pop_front();
    }
    int size()
    {
       return q.size();
    }
    int front()
    {
        return q.front();
    }
    bool empty()
    {
        return q.empty();
    }
};
int main()
{
     MyQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}