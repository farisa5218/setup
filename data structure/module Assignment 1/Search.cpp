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
int findval(node *head, int v)
{
    int index = 0;
    node *tem = head;
    while (tem != NULL)
    {
        if (tem->val == v)
        {
            return index;
        }
        tem = tem->next;
        index++;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
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
        int v;
        cin >> v;
        int result = findval(head, v);
        cout << result << endl;
    }
    return 0;
}