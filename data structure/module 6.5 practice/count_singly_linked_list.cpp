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
void print_linked_list(node*head)
{
    int c=0;
    node*tem=head;
    while(tem!=NULL)
    {
        c++;
        tem=tem->next;
    }
    cout<<c;
}
void insert_at_tail(node*&head,int val)
{
    node*newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        return;
    }
    node*tem=head;
    while(tem->next!=NULL)
    {
        tem=tem->next;
         
    }
    tem->next=newnode;
   
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
    }
    print_linked_list(head);
    return 0;
}

