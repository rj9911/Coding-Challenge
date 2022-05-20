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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        
        ListNode *d1 = headA;
        ListNode *d2 = headB;
        
        // if a and b are of different length, there will always stop the loop after second                  //  iteration
        while(d1 != d2){
            // for the end of the iteration, we just reset to head of another linked list.
            d1 = d1 == NULL ? headB : d1 -> next;
            d2 = d2 == NULL ? headA : d2 -> next;
        }
        return d1;
    }
};