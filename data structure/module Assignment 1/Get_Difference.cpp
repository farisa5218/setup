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
int maximum(node *head)
{
    node *tem = head;
    if (head == NULL)
    {
        return INT_MIN;
    }
    int maxval = tem->val;
    while (tem != NULL)
    {
        maxval = max(maxval, tem->val);
        tem = tem->next;
    }
    return maxval;
}
int minimum(node *head)
{
    node *tem = head;
    if (head == NULL)
    {
        return INT_MAX;
    }
    int minval = tem->val;
    while (tem != NULL)
    {
        minval = min(minval, tem->val);
        tem = tem->next;
    }
    return minval;
}
int main()
{
    node *head = NULL;
    node *tail = NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head,tail,val);
    }
    int result1=maximum(head);
    int result2=minimum(head);
    int difference=(result1-result2);
    cout<<difference<<endl;

    return 0;
}