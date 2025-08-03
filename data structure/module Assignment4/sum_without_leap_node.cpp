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
int preorder(Treenode*root)
{
   if(!root)
        return 0;
    
    if (root->left==NULL && root->right==NULL) 
        return 0;
    
    return root->val + preorder(root->left) + preorder(root->right);
}
int main()
{
     Treenode *root=input_tree();
     int sum=preorder(root);
     cout<<sum<<endl;
    return 0;
}