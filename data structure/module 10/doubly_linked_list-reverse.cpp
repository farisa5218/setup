#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node*pre=NULL;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->pre=NULL;
    }
};
void print(node*head)
{
    node *tem=head;
    while(tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
}
void reverse(node *&head,node *tail)
{
    node*i=head;
    node*j=tail;
    while(i!=j && i->next!=j)
    {
        swap(i->val,j->val);
        i=i->next;
        j=j->pre;
    }
    swap(i->val,j->val);  
}
int main()
{
    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node*tail=c;
    head->next=a;
    a->next=b;
    b->next=c;
    c->pre=b;
    b->pre=a;
    a->pre=head;
    reverse(head,tail);
    print(head);
    return 0;
}