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
void insert_at_position(node *head, int pos, int val)
{
    node *newnode = new node(val);
    node *tem = head;
    for (int i = 1; i < pos; i++)
    {
        tem = tem->next;
    }
    newnode->next = tem->next;
    tem->next = newnode;
    newnode->next->pre = newnode;
    newnode->pre = tem;
}
void print_normal(node *head)
{
    node *tem = head;
    cout << "L ->";
    while (tem != NULL)
    {
        cout << " " << tem->val;
        tem = tem->next;
    }
    cout << endl;
}
void print_reverse(node *tail)
{
    node *tem = tail;
    cout << "R ->";
    while (tem != NULL)
    {
        cout << " " << tem->val;
        tem = tem->pre;
    }
    cout << endl;
}
void insert_head(node *&head, node *&tail, int val)
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
    newnode->pre = NULL;
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
    newnode->next = NULL;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int pos;
        cin >> pos;
        int val;
        cin >> val;
        if (pos < 0 || pos > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (pos == 0)
        {
            insert_head(head, tail, val);
        }

        else if (pos == size(head))
        {
            insert_tail(head, tail, val);
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