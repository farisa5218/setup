// /**
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
//  */
// class Solution {
// public:
// int size(ListNode*head)
// {
//     ListNode*tem=head;
//     int c=0;
//     while(tem!=NULL)
//     {
//         c++;
//         tem=tem->next;
//     }
//     return c;
// }
//     ListNode* removeNthFromEnd(ListNode* head, int n)
//      {
//         int indexToRemove = size(head) - n;
//     if (indexToRemove == 0)
//      {
//         ListNode* toDelete = head;
//         head = head->next;
//         delete toDelete;
//     }
//      else 
//      {
//         ListNode* tem = head;
//         for (int i = 0; i < indexToRemove -1 ; i++)
//          {
//             cout<<"Loop ar vitore:"<<tem->val<<endl;
//             tem = tem->next;
//         }
//         cout<<endl;
//         cout<<"Loop ar bahire tem:"<<tem->val<<endl;
//         cout<<endl;
//         ListNode* toDelete = tem->next;
//         cout<<"Loop ar bahire tem->next ar value:"<<tem->next->val<<" ";
//         tem->next = tem->next->next;
//         delete toDelete;
//     }
//     return head;
//     }
// };