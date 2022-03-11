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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *start, *p, *q, *r;
        start = NULL;
        
        // if either is NULL, return the other
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        
        p = list1;
        q = list2;
        // assign a initial node to 'start'
        start =( p->val < q->val) ? p : q;
        // based on above, move the pointer 1 node forward
        if(p->val < q->val) 
            p = p->next;
        else 
            q = q->next;
        // (to traverse new node)
        r = start;
        // merging of nodes
        while(p != NULL && q != NULL)
        {
            if(p->val <= q->val)
            {
                
                r->next = p;
                p = p->next;
            }
            else {
                
                r->next = q;
                q = q->next;
            }
             r = r->next;
        }
        
        // if a LL is yet to be added fully, add at the end of merged LL
        if(p != NULL)
        {
            r->next = p;
        }
        else if(q != NULL)
        {
            r->next = q;
        }
        
        return start;
    }
};

// if(start == NULL)
                // {
                //     start = q;
                //     q = q->next;
                //     start->next = p;
                // }
                // else {
                //     r = q;
                //     q = q->next;
                //     r->next = p;
                // }

// if(start == NULL)
                // {
                //     start = p;
                //     p = p->next;
                //     start->next = q;
                // }
                // else {
                //     r = p;
                //     p=p->next;
                //     r->next = q;
                // }