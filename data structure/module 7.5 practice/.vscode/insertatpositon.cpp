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
int size(node *head)
{
    node *tem = head;
    int count = 0;
    while (tem != NULL)
    {
        count++;
        tem = tem->next;
    }
    return count;
}
void print_linked_list(node *head)
{
    node *tem = head;
    while (tem != NULL)
    {
        cout << tem->val << " ";
        tem = tem->next;
    }
}
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
}
int main()
{
    node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
    
            int pos, v;
            cin >> pos >> v;
            insert_at_position(head, pos, v);

    }

    print_linked_list(head);
    return 0;
}