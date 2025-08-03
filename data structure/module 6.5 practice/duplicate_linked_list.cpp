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
    node* Newnode=new node(v);
    if(head==NULL)
    {
        head=Newnode;
        return;
    }
    node*tem=head;
    while (tem->next!=NULL)
    {
       tem=tem->next;
    }
    tem->next=Newnode;
    cout<<endl;
}
void print_linked_list(node*head)
{
    node*tem=head;
    cout<<"YOUR LINKED LIST :";
    while(tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(node*head,int v,int pos)
{
    node *Newnode=new node(v);
    node *tem=head;
    for(int i=1;i<pos;i++)
    {
        if(tem==NULL)
        {
            cout<<"Invalid index"<<endl<<endl;
        }
        tem=tem->next;
    }
     Newnode->next=tem->next;
     tem->next=Newnode;
     cout<<endl<<endl;
}
void insert_at_head(node*&head,int v)
{
    cout<<"INSERTED AT HEAD";
    node *Newnode=new node(v);
    Newnode->next=head;
    head=Newnode;
}
void deletenode(node*head,int pos)
{
    node*tem=head;
    for(int i=1;i<pos;i++)
    {
        if(tem==NULL)
        {
            cout<<"Invalid index"<<endl<<endl;
        }
        tem=tem->next;
    }
    node*deletenode=tem->next;
    tem->next=tem->next->next;
    delete deletenode;
}
void deletehead(node*&head)
{
    node*tem=head;
    if(tem==NULL)
        {
            cout<<"Head is not avilable"<<endl<<endl;
        }
    node *deletenode=head;
    head=head->next;
    delete deletenode;
}
int main()
{
    node *head=NULL;
    while(true)
    {
        cout<<"OPTION 1:INSERT AT TAIL"<<endl;
        cout<<"OPTION 2:PRINT LINKED LIST"<<endl;
        cout<<"OPTION 3:INSERT AT ANY POSITION:"<<endl;
        cout<<"OPTION 4:INSERT AT HEAD:"<<endl;
        cout<<"OPTION 5:DELETE AT ANY POSITION:"<<endl;
        cout<<"OPTION 6:DELETE AT HEAD:"<<endl;
        cout<<"OPTION 7:TERMINATE"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            int val;
            cout<<"ENTER THE TAIL :";
            cin>>val;
        insert_at_tail(head,val);
        }
        if(op==2)
        {
            print_linked_list(head);
        }
        if(op==3)
        {
             int pos;
            cout<<"ENTER THE POSITION :";
            cin>>pos;
            int val;
            cout<<"ENTER THE VALUE :";
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
        if(op==4)
        {
            int v;
            cout<<"ENTER THE VALUE :";
            cin>>v;
            insert_at_head(head,v);
        }
        if(op==5)
        {
             int pos;
          cout<<"Enter the position: ";
           cin>>pos;
           if(pos==0)
           {
            deletehead(head);
           }
           else{
          deletenode(head,pos);
           }
        }
        if(op==6)
        {
            deletehead(head);
        }
        if(op==7)
        {
            break;
        }
    }
    return 0;
}