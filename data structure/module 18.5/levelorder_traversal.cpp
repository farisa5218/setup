#include <bits/stdc++.h> 
using namespace std;

/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };  link: https://www.naukri.com/code360/problems/level-order-traversal_796002

************************************************************/

template<typename T>
vector<T> getLevelOrder(BinaryTreeNode<T> *root) {
  vector<T>v;
  if(root==NULL) return v;
  queue<BinaryTreeNode<T>*>q;
  q.push(root);
  while(!q.empty())
  {
     
          BinaryTreeNode<T>*f=q.front();
         q.pop();
         v.push_back(f->val);
         if(f->left) q.push(f->left);
         if(f->right) q.push(f->right);
  }
  return v;
}
