#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    }; LINK: https://www.naukri.com/code360/problems/special-binary-tree_920502

*************************************************************/

bool isSpecialBinaryTree(BinaryTreeNode<int> *root) {
  // Write your code here.
  if (root->left == NULL && root->right == NULL)
    return true;
    if(root->left==NULL || root->right==NULL) return false;
    int l=isSpecialBinaryTree(root->left);
    int r=isSpecialBinaryTree(root->right);
    if(l==false || r==false) return false;
    else return true;
}