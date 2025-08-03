#include<bits/stdc++.h>
using namespace std;
class ListNode
{
    public:
    int val;
    ListNode*next;
    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_tail(ListNode*&head,ListNode*&tail,int v)
{
    ListNode *newnode=new ListNode (v);
    if(tail==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=tail->next;
    tail=newnode;
}
 void  result(ListNode* head) {
        int sum=0;
        //list<int>mylist;
        ListNode*tem=head;
        while(tem!=NULL )
        {
            cout<<sum;
            sum=sum+tem->val;
            tem=tem->next;
        }    
    }
    void print(ListNode*head)
{
    ListNode*tem=head;
    while(tem!=NULL)
    {
        cout<<tem->val<<endl;
        tem=tem->next;
    }
}
int main()
{
    ListNode*head=NULL;
    ListNode*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
    //result(head);
    print(head);
    return 0;
}