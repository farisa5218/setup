#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    }; LINK: https://www.naukri.com/code360/problems/node-level_920383?leftPanelTabValue=PROBLEM

************************************************************/

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    // Write your code here.
    queue<pair<TreeNode<int>*,int>>q;
    // q.push(make_pair(root,1));
    q.push({root,1});
    while(!q.empty())
    {
        pair<TreeNode<int>*,int> pr=q.front();
        TreeNode<int> *node=pr.first;
        int level=pr.second;
        q.pop();

        if(node->val== searchedValue)
        {
            return level;
        }
        if(node->left) q.push({node->left,level+1});
        if(node->right)  q.push({node->right, level + 1});
    }
}




/************************************************************* 
 * 
 * Alternative  way this code
 
 #include <bits/stdc++.h> 

    Following is the TreeNode class structure
    template <typename T>
    class TreeNode {
       public:
        T val;
        bool isOriginal;
        TreeNode<T> *left;
        TreeNode<T> *right;
        
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };


    // Write your code here.
int dfs(TreeNode<int>* root, int searchedValue)
{
    // Check if the root node is null.
    if(root == NULL)
    {
        return 0;
    }

    // Check if value of root is equal to given value.
    if(root -> val == searchedValue)
    {
        return 1;
    }

    // Traverse left subtree of root node and store returned value in variable leftLevel.
    int leftLevel = dfs(root -> left, searchedValue);

    if(leftLevel != 0)
    {
        return leftLevel + 1;
    }

    // Traverse right subtree of root node and store returned value in variable rightLevel.
    int rightLevel = dfs(root -> right, searchedValue);

    if (rightLevel != 0) 
    {
        return rightLevel + 1;
    }
    
    }
int nodeLevel(TreeNode<int>* root, int searchedValue)
{


    // Call recursive dfs function with given tree and searchedValue.
    int ans = dfs(root, searchedValue);

    // Return ans.
    return ans;

}

 *************************************************************/
