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
void level_node(Treenode*root,int x)
{
    if(root==NULL)
    {
        return;
    }

    queue<Treenode*>q;
    q.push(root);
    int level=0;
    while(!q.empty())
    {
        int size=q.size();
        level++;
        for(int i=0;i<size;i++)
        {
        Treenode*f=q.front();
        q.pop();
        if(level-1 == x)
        {
            cout<<f->val<<" ";
        }
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
        }
        if(level-1 == x)
        {
            cout<<endl;
            return;
        }
    }
    cout<<"Invalid"<<endl;
}
int main()
{
    Treenode*root=input_tree();
    int x;
    cin>>x;
    level_node(root,x);
    return 0;
}