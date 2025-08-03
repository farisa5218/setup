#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    node *tem = head;
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
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
void find_middle(node *head)
{
    node *tem = head;
    node *slow_ptr = tem;
    node *fast_ptr = tem;
    node *prev_slow_ptr = NULL;
    while (fast_ptr != NULL && fast_ptr->next != NULL)
    {
        fast_ptr = fast_ptr->next->next;
        prev_slow_ptr = slow_ptr;
        slow_ptr = slow_ptr->next;
    }
    if (fast_ptr != NULL)
    {
        cout << "Middle element: " << slow_ptr->val << endl;
    }
    else
    {
        cout << "Middle elements: " << prev_slow_ptr->val << " " << slow_ptr->val << endl;
    }
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
        else
        {
            insert_tail(head, tail, val);
        }
    }
    find_middle(head);
    return 0;
}