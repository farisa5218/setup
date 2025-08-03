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
int main()
{
    node *head=NULL;
    while (true)
    {
    cout<<"Insert at tail :"<<endl;
    cout<<"Print linked list :"<<endl;
    cout<<"Terminate :"<<endl;
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
        break;
    }
    }
    return 0;
}