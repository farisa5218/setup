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
void insert_tail(node *&head, node *&tail, int val)
{
    node *newnode = new node(val);
    node *tem = head;
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
void print(node *head1, node *head2)
{
    node*i=head1;
    node*j=head2;
    bool flag=true;
    while(i!=NULL && j!=NULL)
    {
        if(i->val!=j->val)
        {
            flag=false;
        }
        i=i->next;
        j=j->next;
    }
    if(size(head1)==size(head2))
    {
        if(flag==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    }
    else
    {
        cout<<"NO"<<endl;
    }

    //shortcut korle aibabe kora jabe uporer na korle o hobe

    // if (size(head1) == size(head2) && head1->val == head2->val && head1->next && head2->next)
    // {

    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }
}
int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    node *tail1 = NULL;
    node *tail2 = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head1, tail1, val);
    }
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head2, tail2, val);
    }
    print(head1, head2);
    return 0;
}