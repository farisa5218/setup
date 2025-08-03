#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node *pre;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->pre = NULL;
    }
};
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
void insert_tail(node*&head,node*&tail,int v)
{
    node *newnode=new node(v);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;
}
int main()
{
    node *head = NULL;
    node *tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
          {
            break;
          }
        insert_tail(head,tail,val);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}