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

int size(node *head)
{
    int count = 0;
    node *tem = head;
    while (tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}

void insert_at_position(node *head, int pos, int val)
{
    node *newnode = new node(val);
    node *tem = head;
    for (int i = 1; i < pos; i++)
    {
        tem = tem->next;
    }
    newnode->next=tem->next;
    tem->next=newnode;
    newnode->next->pre=newnode;
    newnode->pre=tem;
}

void insert_at_head(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    newnode->next = head;
    head->pre = newnode;
    head = newnode;
    head->pre = NULL;
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
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next=newnode;
    newnode->pre=tail;
    tail=newnode;
    tail->next=NULL;
}

int main()
{
    node *head = NULL;
    node *tail = NULL;
    int t;
    cin >> t;
    int pos, val;
    while (t--)
    {
        cin >> pos >> val;
        if (pos == 0)
        {
            insert_at_head(head, tail, val);
        }
        else if (pos == size(head))
        {
            insert_tail(head, tail, val);
        }
        else if (pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else
        {
            insert_at_position(head, pos, val);
        }
        print_normal(head);
        print_reverse(tail);
    }
    return 0;
}
