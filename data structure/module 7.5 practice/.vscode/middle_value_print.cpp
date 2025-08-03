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
void middle_check(node *head)
{
    node *tem=head;
    node*first=tem;
    node *last=tem;
    node*pre=NULL;
    while (first!=NULL && first->next!=NULL )
    {
        first=first->next->next;
        pre=last;
        last=last->next;
    }
    
    if(first!=NULL)
    {
        cout<<last->val<< endl;
    }
    else{
        cout<<pre->val<<" "<<last->val<< endl;
    }
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
        insert_tail(head,tail,val);
    }  
    middle_check(head) ; 
    return 0;
}