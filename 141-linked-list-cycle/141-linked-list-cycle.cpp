/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        // if the list is empty
        // return false
        if(head == NULL)
            return false;
        
        // make two pointers, fast and slow
        ListNode *fast, *slow;
        fast = head;
        slow = head;

        // the concept used here can be explained like so: if two people start running from on circular track, and A is twice fast as B, they will meet twice or more. this again proves the track is circular. 
        // similarly, if there is a cycle, the fast and slow pointers with coicide at some point.
        while(fast!= NULL && fast->next != NULL)
        {
            // fast moves forward by 2 nodes, slow moves by 1 node
            fast = fast->next->next;
            slow = slow->next;
            
            // if they coincide, there is a cycle
            if(fast == slow)
                return true;
        }
        
        return false;
    }
};

// Learn Algo: Floyd’s Cycle-Finding Algorithm