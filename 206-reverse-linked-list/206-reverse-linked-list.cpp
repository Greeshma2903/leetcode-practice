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
    ListNode* reverseList(ListNode* head) {
        // if list contains no node or single node
        // return head
        if(head == NULL)
            return head;
        if(head->next == NULL)
            return head;
        
        // to reverse a linked list, we use three pointers
        // ptr -> tracks current node
        // next -> tracks the node next to 'current'
        // prev -> tracks the node before 'current'
        ListNode *ptr, *prev, *next;
        ptr = head;
        prev = NULL;
        next = NULL;
        
        // in the loop
        // keep track of next node &
        // make the current node point to previous node
        // repeat this till end of list
        // the last node is pointed by 'prev' which is made the 'head'
        while(ptr !=NULL)
        {
            next = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = next;
        }
        
        head = prev;
        return head;
    }
};