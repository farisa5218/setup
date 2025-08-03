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
void insert_at_tail(node*&head,int v)
{
    node *newnode=new node (v);
    if(head==NULL)
    {
        head=newnode;
        cout<<endl<<"Inserted head"<<endl<<endl;
        return;
    }
    node*tem=head;
    while(tem->next!=NULL)
    {
        tem=tem->next;
    }
    tem->next=newnode;
}
void print_linked_list(node*head)
{
    node*tem=head;
    while(tem!=NULL)
    {
        cout<<"your linked list:"<<tem->val<<endl;
        tem=tem->next;
    }
    cout<<endl;
}
int main()
{
    int v;
    node*head=NULL;
    while (true)
    {
       cin>>v;
       if(v==-1)
       {
        break;
       }
       insert_at_tail(head,v);
       print_linked_list(head);
    }
    
    return 0;
}