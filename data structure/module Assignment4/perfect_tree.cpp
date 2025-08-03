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
int maxheight(Treenode*root)
{
    if(root==NULL) return 0;
    int l=maxheight(root->left);
    int r=maxheight(root->right);
    return max(l,r)+1;
}
int count_node(Treenode*root)
{
    if(root==NULL)
    {
        return 0;
    }
    int l=count_node(root->left);
    int r=count_node(root->right);
    return (l+r+1);
}
int main()
{
    Treenode* root = input_tree();
    int c=maxheight(root);
    int c1=pow(2,c)-1;
    int c2=count_node(root);
    if(c1==c2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}