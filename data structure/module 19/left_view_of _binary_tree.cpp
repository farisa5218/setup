#include <bits/stdc++.h> 
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
    }; LINK: https://www.naukri.com/code360/problems/left-view-of-a-binary-tree_920519

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    //    Write your code here
     queue< pair<TreeNode<int>*,int >>q;
     vector<int> v;
      if(root==NULL) return v;
        q.push({root, 1});
      bool frq[3005] = {false};
      while (!q.empty()) {
        pair<TreeNode<int>*,int>pr=q.front();
        TreeNode<int>* node=pr.first;
        int level=pr.second;
        q.pop();

        if(frq[level]==false)
        {
            v.push_back(node->data);
            frq[level]=true;
        }

        if(node->left) 
        {
            q.push({node->left, level + 1});
        }
         if(node->right) 
        {
            q.push({node->right, level + 1});
        }
    }
    return v;
}