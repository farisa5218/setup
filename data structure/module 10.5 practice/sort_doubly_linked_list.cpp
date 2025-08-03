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

void sorted(node *head)
{
    for(node *i=head;i->next!=NULL;i=i->next)
    {
        for(node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
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
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->pre = tail;
    tail = newnode;
    tail->next = NULL;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        insert_tail(head, tail, val);
    }
    sorted(head);
    print_normal(head);
    return 0;
}
