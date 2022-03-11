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
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
       ListNode *p, *temp, *prev;
        
        if(head == NULL) return head;
        
        p = head;
        prev = NULL;
        while(p != NULL)
        {
           if(p == head && p->val == val)
           {
               temp = head;
               head = head->next;
               p = head;
               delete temp;
           }
           else {
               if(p->val == val)
               {
                   temp = p;
                   prev->next = temp->next;
                   p = temp->next;
                   delete temp;
                   continue;
               }
               prev = p;
               p = p ->next;
           }
        }
        
        return head;
    }
};