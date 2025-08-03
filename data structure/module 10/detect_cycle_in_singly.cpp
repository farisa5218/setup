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
int main()
{
    node *head=new node(10);
    node *a=new node(20);
    node *b=new node(30);
    node *c=new node(40);
    node *d=new node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=c;//akhane a,head,b,c,d jai di na keno ata cycle deteced hobe but null hole hobe na
   node*fast=head;
   node*slow=head;
   bool flag=false;
   while(fast!=NULL &&fast->next!=NULL)
   {
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    {
        flag=true;
        break;
    }
   }
   if(flag==true)
   {
    cout<<"Cycle Detected"<<endl;
   }
   else
   {
    cout<<"Not cycle"<<endl;
   }
    return 0;
}