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
void palindrome(node *head, node *tail)
{
    node *i = head;
    node *j = tail;
    bool flag=true;
    while (i != j && i->next != j)
    {
       if(i->val != j->val)
       {
        flag=false;
       }
       i=i->next;
       j=j->pre;
    }
   if(i->val != j->val)
   {
    flag=false;
   }
   if(flag==false)
   {
    cout<<"NO"<<endl;
   }
   else
   {
    cout<<"YES"<<endl;
   }
}
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre = tail;
    tail = newnode;
    tail->next = NULL;
}
int main()
{
    node *head= NULL;
    node*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
   palindrome(head,tail);
    return 0;
}