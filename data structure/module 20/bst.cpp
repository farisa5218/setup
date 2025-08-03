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
    Treenode*root;
    if(val==-1) root=NULL;
    root = new Treenode(val);
    queue<Treenode*>q;
    if(root == NULL) cout<<"TREE NAI"<<endl;
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
bool search(Treenode*root,int x)
{
    if(root==NULL) return false;
    if(root->val==x) return true;
    return (search(root->left,x) || search(root->right,x));

}
int main()
{
     Treenode*root=input_tree();
     int x;
     cin>>x;
     bool result=search(root,x);
     if(result) cout<<"Found"<<endl;
     else cout<<"Not Found"<<endl;
 
    return 0;
}

// 1 2 3 4 -1 -1 5 7 8 9 -1 -1 -1 -1 -1 -1 -1
// 10 input
// output Not Found