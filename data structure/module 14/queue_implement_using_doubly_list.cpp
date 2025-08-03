#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node*pre;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
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
        node*NewNode=new node (val);
        if(tail==NULL)
        {
            head=NewNode;
            tail=NewNode;
            return;
        }
        tail->next=NewNode;
        NewNode->pre=tail;
        tail=NewNode;
        NewNode->next=NULL;
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
        head->pre=NULL;
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