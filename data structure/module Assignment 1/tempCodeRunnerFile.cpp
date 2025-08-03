#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node*next;
    node(int val)
    {
        this->val=val;
        this->next=NULL;
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
    node *tem=head;
    while(tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
}
void remove_duplicate(node *head)
{
    node *tem = head;

    // Traverse the list
    while (tem != NULL)
    {
        int value = tem->val;
        node *runner = tem;
        cout<<value<<endl;
        cout<<runner<<endl;
        while (runner->next != NULL)
        {
            if (runner->next->val == value)
            {
                node *duplicate = runner->next;
                runner->next = runner->next->next;
                 cout<<runner->next->val<<endl;;
                delete duplicate;
                 cout<<runner->next->val<<endl;
            }
           
            else
            {
                
                runner = runner->next;
            }
        }

       tem =tem->next;
    }
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
    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}