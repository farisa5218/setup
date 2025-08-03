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
void leap_node(Treenode*root)
{
     if (root==NULL)
        return;

    vector<int> v;
    queue<Treenode*> q;
    q.push(root);
    while (!q.empty()) 
    {
        Treenode* f = q.front();
        q.pop();


        if (!f->left && !f->right)  
            v.push_back(f->val);


        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    sort(v.begin(), v.end(), greater<int>());
    for (int x : v) 
    {
        cout << x << " ";
    }
    cout << endl;
}
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
int main()
{
     Treenode* root = input_tree();
     leap_node(root);
    return 0;
}