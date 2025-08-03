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
void print_linked_list(node*head)
{
    node*tem=head;
    while(tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
}
int size(node *head)
{
    node *tem=head;
    int count=0;
    while(tem!=NULL)
    {
        count++;
        tem=tem->next;
    }
    return count;
}
int main()
{
    node*head=NULL;
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
        for(node*i=head;i->next!=NULL;i=i->next)
        {
            for(node*j=i->next;j!=NULL;j=j->next)
            {
                if(i->val<j->val)  //descending order;
                {
                    swap(i->val,j->val);

                }
            }
        }
    }
    print_linked_list(head);
    return 0;
}