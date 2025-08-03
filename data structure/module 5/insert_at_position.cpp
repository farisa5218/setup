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
void  insert_at_tail(node*&head,int v)
{
    node*Newnode=new node(v);
    if(head==NULL)
    {
        head=Newnode;
        return;
    }
    node*tem=head;
    while(tem->next!=NULL)
    {
        tem=tem->next;
    }
    tem->next=Newnode;
}
void print_linked_list(node*head)
{
    node*tem=head;
    while(tem!=NULL)
    {
        cout<<"your linked list :";
        cout<<tem->val<<endl;
        tem=tem->next;
    }
    cout<<endl;
}
void  insert_at_position(node*head,int v,int pos)
{
    node*newnode=new node(v);
    node*tem=head;
    for(int i=1;i<pos;i++)
    {
        tem=tem->next;
    }
    newnode->next=tem->next;
    tem->next=newnode;
    cout<<endl<<endl<<"INSERT ANY POSITION :"<<pos<<endl<<endl;
}
int main()
{
    node *head=NULL;
    while (true)
    {
    cout<<"option 1:Insert at tail :"<<endl;
    cout<<"option 2:Print linked list :"<<endl;
    cout<<"option 3:insert any position :"<<endl;
    cout<<"option 4:Terminate :"<<endl;
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
        insert_at_position(head,val,pos);

    }
    else if(op==4)
    {
        break;
    }
    }
    return 0;
}