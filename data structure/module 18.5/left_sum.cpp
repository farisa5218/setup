#include <bits/stdc++.h> 
/*
	Tree Node class.

	class BinaryTreeNode 
	{
		T data;
		BinaryTreeNode<T> *left;
		BinaryTreeNode<T> *right;

		BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
		}
	} Link: https://www.naukri.com/code360/problems/left-sum_920380?leftPanelTabValue=PROBLEM
*/

long long leftSum(BinaryTreeNode<int> *root)
{
	// Write your code here.
	 if (root == NULL)
        return 0;

    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    long long sum = 0;

    while (!q.empty()) 
	{
        BinaryTreeNode<int>* f = q.front();
        q.pop();
        
        if (f->left != NULL)
	   {
            sum += f->left->data;
            q.push(f->left);
        }

        if (f->right != NULL) 
		{
            q.push(f->right);
        }
    }

    return sum;
}