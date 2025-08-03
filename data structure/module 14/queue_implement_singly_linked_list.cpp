#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class MyQueue
{
    public:
    node*head=NULL;
    node*tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node*newnode=new node(val);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        tail=newnode;

    }
    void pop()
    {
        sz--;
        node*deletenode=head;
        head=head->next;
        if(head==NULL)
        {
            tail=NULL;
            return;
        }
        delete deletenode;
    }
    int size()
    {
        return sz;
    }
    int top()
    {
        return head->val;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
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
        cout<<q.top()<<endl;
        q.pop();
    }
    return 0;
}