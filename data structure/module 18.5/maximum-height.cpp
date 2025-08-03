/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode
    {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val)
        {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };  Link: https://www.naukri.com/code360/problems/tree-height_4609628

************************************************************/

int heightOfBinaryTree(TreeNode<int> *root)
{
	// Write your code here.
    if(root==NULL) return 0;
    int L=heightOfBinaryTree(root->left);
    int R=heightOfBinaryTree(root->right);
    return max(L,R)+1;
}
