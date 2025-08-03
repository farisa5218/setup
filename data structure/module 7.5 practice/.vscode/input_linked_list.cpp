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
int size(node*head)
{
    node *tem=head;
    int count=0;
    while(tem!=NULL)
    {
        count++;
        tem=tem->next;
    }
    return count;
}
void print_linked_list(node*head)
{
    node*tem=head;
    while(tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
}
void insert(node*&head,node*&tail,int val)
{
    node *newnode=new node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    // ata just time complexity komanor jonno use korte hoy jar time complexilty holo o(1);
    // head ke dore kore akhane time complexity holo o(n);

    tail->next=newnode;
    tail=newnode;

}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        else
        {
            insert(head,tail,val);
        }
        
    }
    print_linked_list(head);
    return 0;
}