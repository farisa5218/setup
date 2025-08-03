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
    if (tail == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void result(node *head)
{
    node *tem = head;
    list<int> mylist;
    while (tem != NULL)
    {
        mylist.push_back(tem->val);
        tem = tem->next;
    }
    mylist.sort();
    mylist.unique();
    for (int val : mylist)
    {
        cout << val << " ";
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
    result(head);
    return 0;
}