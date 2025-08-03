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
void insert_tail(node*&head,node*&tail,int val)
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
int duplicated_check(node *head)
{
    node *tem=head;
    int count=0;
    for(node *i=head;i->next!=NULL;i=i->next)
    {
        for(node *j=i->next;j!=NULL;j=j->next)
        {
            if(i->val==j->val)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
     node *head=NULL;
    node*tail=NULL;
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
          insert_tail(head,tail,val);
        }
    }
    int result=duplicated_check(head);
    if(result>0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}