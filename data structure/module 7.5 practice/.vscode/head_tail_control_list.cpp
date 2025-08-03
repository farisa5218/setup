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
void insert_at_tail(node*&head,int val,int pos)
{
    node*newnode=new node(val);
    node*tem=head;
    for(int i=1;i<pos;i++)
    {
        tem=tem->next;
    }
    newnode->next=tem->next;
    tem->next=newnode;

}
// void inserttail(node*&head,int v)
// {
//      node*newnode=new node(v);
//     if(head==NULL)
//     {
//         head=newnode;
//         return;
//     }
//     node*tem=head;
//     while(tem->next!=NULL)
//     {
//         tem=tem->next;
//     }
//     tem->next=newnode;

// }
void print_linked_list(node*head)
{
    node*tem=head;
    while(tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
}
int size(node*head)
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
void insert_at_head(node*&head,int val)
{
    node*newnode=new node(val);
    newnode->next=head;
    head=newnode;
}
int main()
{
    node*head=new node(10);
    node*a=new node(20);
    node*b=new node(30);
    node*c=new node(40);
    node*d=new node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
     int val,pos;
      cin>>pos;
        if(pos>size(head))
        {
            cout<<"invalid";

        }
        else if(pos==0)
        {
            int val;
            cin>>val;
            insert_at_head(head,val);
        }
        else{
            cin>>val;
            insert_at_tail(head,val,pos);
        }
    
        print_linked_list(head);
        
   
    return 0;
}