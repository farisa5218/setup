/* https://www.naukri.com/code360/problems/preorder-binary-tree_5948 */ 
#include <bits/stdc++.h>
using namespace std;

template<typename T>
vector<T> preOrderHelper(TreeNode<T>* cur) 
{
    vector<T> path;
    if (cur == NULL) return path;
    path.push_back(cur->data);
    vector<T> left = preOrderHelper(cur->left);
    vector<T> right = preOrderHelper(cur->right);
    path.insert(path.end(), left.begin(), left.end());
    path.insert(path.end(), right.begin(), right.end());
    return path;
}

template<typename T>
vector<T> preOrder(TreeNode<T>* root) {
    return preOrderHelper(root);
}
