/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };  LINK: https://www.naukri.com/code360/problems/diameter-of-the-binary-tree_920552

************************************************************/
int mx=0;
int maxHeight(TreeNode<int> *root)
{
    if(root==NULL) return 0;
    int l=maxHeight(root->left);
    int r= maxHeight(root->right);
    int d=l+r;
     mx=max(mx,d);
    return max(l,r)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    mx=0;
    int l=maxHeight(root->left);
    int r=maxHeight(root->right);
    return max(mx,l+r);
}









/* Alternative way this code

/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

   code..........................................................


int mx=0;
int maxHeight(TreeNode<int> *root)
{
    if(root==NULL) return 0;
    int l=maxHeight(root->left);
    int r= maxHeight(root->right);
    int d=l+r;
    mx=max(mx,d);
    return max(l,r)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
   maxHeight(root);
    return mx;
}

************************************************************/