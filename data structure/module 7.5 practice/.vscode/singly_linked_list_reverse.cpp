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
void print_recursion(node*head)
{
    if(head==NULL)//base case
    {
        return;
    }
    cout<<head->val<<" ";
    print_recursion(head->next);
}
void print_reverse(node*head)
{
    if(head==NULL)//base case
    {
        return;
    }
    
    print_reverse(head->next);
    cout<<head->val<<" ";
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
    print_recursion(head);
    cout<<endl;
    print_reverse(head);
    return 0;
}