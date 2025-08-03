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
Treenode*convert(int a[],int n,int l,int r)
{
    if(l>r) //condition ,infinity handle.
    return NULL;
    int mid =(l+r)/2;
    Treenode*root=new Treenode(a[mid]);
    Treenode *leftRoot=convert(a,n,l,mid-1);
    Treenode *rightRoot=convert(a,n,mid+1,r);
    root->left=leftRoot;
    root->right=rightRoot;
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
int main()
{
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
     }
     Treenode* root=convert(a,n,0,n-1);
     levelOrder(root);
    return 0;
}