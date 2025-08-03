
// class Solution {
// public:
//     void deleteValue(ListNode*& head, int val)
//      {
//         ListNode* tem = head;
//         while (tem != NULL && tem->val == val) 
//         {
//             ListNode *deletenode=tem;
//             head = head->next;
//             delete deletenode;
//             tem=head;
//         }
//         while (tem != NULL && tem->next != NULL)
//          {
//             if (tem->next->val == val)
//              {
//                 ListNode* deletetem = tem->next;
//                 tem->next = tem->next->next;
//                 delete deletetem;
//             }
//              else
//             {
//                 tem = tem->next;
//             }
//         }
//     }
    
//     ListNode* removeElements(ListNode* head, int val) {
//         if (head == NULL) {
//             return head;
//         }
        
//         deleteValue(head, val);
//         return head;
//     }
// };
