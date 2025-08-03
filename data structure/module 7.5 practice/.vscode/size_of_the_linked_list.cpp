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
int size(node*head)
{
    int count=0;
    node*tem=head;
    while(tem!=NULL)
    {
        count++;
        tem=tem->next;
    }
   return count;
}
void insert_tail(node*&head,node*&tail,int val)
{
    node *newnode=new node(val);
    node *tem=head;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int main()
{
    node *head=NULL;
    node*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        else
        {
          insert_tail(head,tail,val);
        }
    }
    int result=size(head);
    cout<<result;
    return 0;
}