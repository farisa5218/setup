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
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
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
void remove_duplicate(node *head)
{
    node *tem = head;
    while (tem != NULL)
    {
        int value = tem->val;//1
        node *tem1 = tem;//1 ar address
        while(tem1->next!=NULL)
        {
            if(tem1->next->val==value)
            {
                node* tem2=tem1->next;
                tem1->next=tem1->next->next;
                delete tem2;
            }
            else
            {
                tem1=tem1->next;
            }
        }
        tem=tem->next;
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
        insert_tail(head, tail, val);
    }
    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}