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
void insert_at_position(node*head,int v,int pos)
{
    node*newnode=new node (v);
    node*tem=head;
    for(int i=1;i<pos;i++)
    {
        tem=tem->next;
    }
    newnode->next=tem->next;
    tem->next=newnode;
    cout<<endl<<endl<<"Inserted at position"<<pos<<endl<<endl;
}
void insert_at_head(node*&head,int v)
{
    node *newnode=new node(v);
    newnode->next=head;
    head=newnode;
}
int main()
{
    node *head=NULL;
    while (true)
    {
    cout<<"option 1:Insert at tail :"<<endl;
    cout<<"option 2:Print linked list :"<<endl;
    cout<<"option 3:insert any position :"<<endl;
    cout<<"option 4:insert any head :"<<endl;
    cout<<"option 5:Terminate :"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
        int v;
        cout<<"ENTER A VALUE :";
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2)
    {
        print_linked_list(head);
    }
    else if(op==3)
    {
        int val,pos;
        cout<<"ENTER A POSITION :";
        cin>>pos;
        cout<<"ENTER A VALUE :";
        cin>>val;
        if(pos==0)
        {
            insert_at_head(head,val);
        }
        else
        {
        insert_at_position(head,val,pos);
        }

    }
    else if(op==4)
    {
        int v;
        cout<<"Enter the head :";
        cin>>v;
        insert_at_head(head,v);
    }
    else if(op==5)
    {
        break;
    }
    }
    return 0;
}