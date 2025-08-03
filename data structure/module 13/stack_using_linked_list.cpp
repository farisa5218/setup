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
class MyStack
{
    public:
    node*head=NULL;
    node*tail=NULL;
    int sz=0;
    void push(int val)
    {
        sz++;
        node *newNode=new node(val);
        if(head==NULL)
        {
            head=newNode;
            tail=newNode;
            return;
        }
        tail->next=newNode;
        newNode->pre=tail;
        tail=newNode;
        newNode->next=NULL;
    }
    void pop()
    {
        sz--;
        node*deleteNode=tail;
        tail=tail->pre;
        if(tail==NULL)
        {
            head=NULL;
            return;
        }
        delete deleteNode;
    }
    int size()
    {
        return sz;
    }
    int top()
    {
        return tail->val;
    }
    bool empty()
    {
        if(sz==0) return true;
        else return false;
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
    
    return 0;
}