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
void delete_at_position(node *head, node *tail, int pos)
{
    node *tem = head;
    for (int i = 1; i < pos; i++)
    {
        tem = tem->next;
    }
    node *deletenode=tem->next;
    tem->next=tem->next->next;
    tem->next->pre=tem;
    delete deletenode;
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
void delete_head(node *&head,node *&tail)
{
    node *deletenode=head;
    head= head->next;
    delete deletenode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->pre=NULL;
}
int size(node *head)
{
    int c = 0;
    node *tem = head;
    while (tem != NULL)
    {
        c++;
        tem = tem->next;
    }
    return c;
}
void delete_tail(node*&head, node *&tail)
{
    node *deletenode=tail;
    tail=tail->pre;
    delete deletenode;
    if(tail==NULL)
    {
       head=NULL;
        return;
    }
    head->pre=NULL;
    tail->next=NULL;
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *tail = c;
    head->next = a;
    a->next = b;
    b->next = c;
    c->pre = b;
    b->pre = a;
    a->pre = head;
    int pos;
    cin >> pos ;
    if (pos == 0)
    {
       delete_head(head,tail);
    }
    else if (pos == size(head))
    {
        delete_tail( head,tail);
    }
    else if (pos > size(head))
    {
        cout << "Invalid" << endl;
    }
    else
    {
        delete_at_position(head, tail, pos);
    }
    print_normal(head);
    print_reverse(tail);
    return 0;
}