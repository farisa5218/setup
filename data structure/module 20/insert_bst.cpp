#include<bits/stdc++.h>
using namespace std;
class Treenode
{
    public:
    int val;
    Treenode*left;
    Treenode*right;
    Treenode(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Treenode* input_tree()
{
    int val;
    cin>>val;
    Treenode* root;
    if(val==-1) root =NULL;
    else root=new Treenode (val);
    if(root==NULL)
    {
        cout<<"Tree Nai"<<endl;
    }
    queue<Treenode*>q;
    if(root!=NULL)
    {
        q.push(root);
    }
    while(!q.empty())
    {
       Treenode*p=q.front();
       q.pop();
       int l,r;
       cin>>l>>r;
       Treenode*left;
       Treenode*right;
       if(l==-1) left=NULL;
       else left=new Treenode(l);
       if(r==-1) right=NULL;
       else right=new Treenode(r);
       p->left=left;
       p->right=right;
       if(p->left!=NULL) q.push(p->left);
       if(p->right!=NULL) q.push(p->right);
    }
    return root;

}
void levelOrder(Treenode* root)
{
    queue < Treenode* >q;
    q.push(root);
    while(!q.empty())
    {
        Treenode* f = q.front();
        q.pop();

        cout<<f->val<<" ";

        if(f->left!=NULL)
        q.push(f->left);

        if(f->right!=NULL)
        q.push(f->right);
    }

}
void insert(Treenode*root,int x)
{
    if(x<root->val)
    {
        if(root->left==NULL)
        {
            root->left=new Treenode(x);
        }
        else
        {
            insert(root->left,x);
        }
    }
    else
    {
        if(root->right==NULL)
        {
            root->right=new Treenode(x);
        }
        else
        {
            insert(root->right,x);
        }

    }
}
int main()
{
     Treenode*root=input_tree();
     int x;
     cin>>x;
     insert(root,x);
     levelOrder(root);
    return 0;
}
// input: 2 5 8 -1 7 9 10 -1 -1 -1 -1 -1 -1
// 1
// Output: 2 5 8 1 7 9 10 