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
class myStack
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
    newnode->pre=tail;
    tail=newnode;
    tail->next=NULL;
   }
   void pop_back()
   {
    sz--;
    node*deletenode=tail;
    tail=tail->pre;
    if(tail==NULL)
    {
        head=NULL;
        return;
    }
    delete deletenode;
    tail->next=NULL;
   }
   void pop_front()
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
      head->pre=NULL;
   }
   int top()
   {
    return tail->val;
   }
   int front()
   {
    return head->val;
   }
   int size()
   {
    return sz;
   }
   bool empty()
   {
    if(sz==0) return true;
    else return false;
   }
};
int main()
{
    myStack st,q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)   
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for(int i=0;i<m;i++)   
    {
        int x;
        cin>>x;
        q.push(x);
    }
    bool flag=true;
    if(st.size()!=q.size())
    {
        flag=false;
    }
    else
    {
        while(!st.empty() && !q.empty())
        {
            if(st.top()!=q.front())
            {
                flag=false;
                break;
            }
            st.pop_back();
            q.pop_front();
        }
    }
    if(flag==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}