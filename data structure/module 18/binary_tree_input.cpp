#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* input_tree()
{
    int val;
    cin>>val;
    node* root;
    if(val==-1) root =NULL;
    else root=new node (val);
    if(root==NULL)
    {
        cout<<"Tree Nai"<<endl;
    }
    queue<node*>q;
    if(root!=NULL)
    {
        q.push(root);
    }
    while(!q.empty())
    {
       node*p=q.front();
       q.pop();
       int l,r;
       cin>>l>>r;
       node*left;
       node*right;
       if(l==-1) left=NULL;
       else left=new node(l);
       if(r==-1) right=NULL;
       else right=new node(r);
       p->left=left;
       p->right=right;
       if(p->left!=NULL) q.push(p->left);
       if(p->right!=NULL) q.push(p->right);
    }
    return root;

}
void levelorder(node* root)
{
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node*f=q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left)
        q.push(f->left);
        if(f->right)
        q.push(f->right);
    
    }
}
int main()
{
    node *root=input_tree();
    levelorder(root);   
    return 0;
}