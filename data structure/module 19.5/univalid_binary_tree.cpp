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
 * 
 * }; LINK:  https://leetcode.com/problems/univalued-binary-tree/
 */
class Solution 
{
public:
    void pre_order(TreeNode *root , int num , bool &ans)
    {
        if(root == NULL)
            return;
        
        if(root->val != num)
            ans = false;
        
        pre_order(root->left , num , ans);
        pre_order(root->right , num , ans);
    }
    
    bool isUnivalTree(TreeNode* root) {
        bool flag = true;
        int value = root->val;
        pre_order(root , value , flag);
        if(flag==true) return true;
        else return false;
    }
};
