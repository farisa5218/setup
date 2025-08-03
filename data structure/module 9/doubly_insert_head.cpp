#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node*pre;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
    }
};
void insert_at_position(node *head,node *tail,int pos,int val)
{
    node *newnode=new node(val);
    node *tem=head;
    for(int i=1;i<pos;i++)
    {
        tem=tem->next;
    }
    newnode->next=tem->next;//30 gore 100 ar address connect kora
    tem->next=newnode;//30 gore 100 value connect kora
    newnode->next->pre=newnode;
    newnode->pre=tem;//100 ke 20 ar sathe connect kora
}
void print_normal(node *head)
{
    node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
    cout << endl;
}
void print_reverse(node *tail)
{
    node *tem = tail;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->pre;                                                                                                                                                                       
    }
    cout << endl;
}
void insert_head(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head->pre=newnode;
    head=newnode;
    newnode->pre=NULL;

}
int main()
{
    node*head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node *tail=c;
    head->next=a;
    a->next=b;
    b->next=c;
    c->pre=b;
    b->pre=a;
    a->pre=head;
    int pos,v;
    cin>>pos>>v;
    if(pos==0)
    {
        insert_head(head,tail,v);
    }
    else
    {
    insert_at_position(head,tail,pos,v);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}