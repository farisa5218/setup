/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * 
 * };  LINK: https://leetcode.com/problems/root-equals-sum-of-children/
 */
class Solution {
public:
    
    bool checkTree(TreeNode* root)
    {
       int node = root->val;
       int l=root->left->val;
       int r=root->right->val;
       int d=l+r;
       if(node==d) return true;
       else return false;
    }
};