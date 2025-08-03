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
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *tail = b;
    head->next = a;
    a->next = b;
    b->pre = a;
    a->pre = head;
    print_normal(head);
    print_reverse(tail);
    return 0;
}