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
void insert_tail(node *&head,node *&tail,int val)
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
int size(node*head)
{
    int count=0;
    node *tem=head;
    while (tem!=NULL)
    {
        count++;
       tem=tem->next;
    }
    return count;
    
}

void reverse(node *head)
{
    if(head==NULL)
    {
        return;
    }
    node *tem=head;
    reverse(tem->next);
    cout<<tem->val<<" ";
   
}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    
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
     reverse(head);
    return 0;
}