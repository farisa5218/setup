#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int size(node *head)
{
    int c = 0;
    node *tem = head;
    while (tem != NULL)
    {
        c++;
        tem = tem->next;
    }
    return c;
}
void result(node *head, int k)
{
    int index = size(head) - k;
    node *tem = head;
    node *tem1 =NULL;
     node *tem2 =NULL;
    for (int i = 0; i < index; i++)
    {
        tem = tem->next;
    }
    tem1=tem;
    tem=head;
     for (int i = 0; i < k-1; i++)
    {
        
        tem = tem->next;
    }
    tem2=tem;
    swap(tem1->val,tem2->val);
    tem=head;
    for(int i=0;i<size(head);i++)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
}
void print(node *head)
{
    node*tem=head;
    while(tem!=NULL)
    {
        cout<<tem->val<<" ";
        tem=tem->next;
    }
}
int main()
{
    node *head = new node(10);
    node *a = new node(20);
    node *b = new node(30);
    node *c = new node(40);
    node *d = new node(50);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    int k;
    cin>>k;
    result(head,k);
    //print(head);
    return 0;
}





// leetcode solve a aibabe solve korcilam
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     int size(ListNode*head)
//     {
//         int c=0;
//         ListNode*tem=head;
//         while(tem!=NULL)
//         {
//             c++;
//             tem=tem->next;
//         }
//         return c;
//     }
//     ListNode* swapNodes(ListNode* head, int k)
//     {
//          int index = size(head) - k;
//     ListNode *tem = head;
//     ListNode *tem1 =NULL;
//      ListNode *tem2 =NULL;
//     for (int i = 0; i < k-1; i++)
//     {
//         tem = tem->next;
//     }
//     tem1=tem;
//     tem=head;
//      for (int i = 0; i < index; i++)
//     {
        
//         tem = tem->next;
//     }
//     tem2=tem;
//     swap(tem1->val,tem2->val);
//     tem = head;
//     return tem;
//     }
// };