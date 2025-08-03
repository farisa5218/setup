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
void insert_tail(node *&head,node *&tail,int val)
{
    node *newnode=new node(val);
    node *tem=head;
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
int size(node*head)
{
    int count=0;
    node *tem=head;
    while (tem!=NULL)
    {
        count++;
       tem=tem->next;
    }
    return count;
    
}
int main()
{
    node *head1=NULL;
    node *head2=NULL;
    node *tail1=NULL;
    node *tail2=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head1,tail1,val);
    }
     while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_tail(head2,tail2,val);
    }
    if(size(head1)==size(head2) && head1->val==head2->val &&head1->next&&head2->next)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}