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
    ListNode* removeElements(ListNode* head, int val1) {
        if(head == NULL)
            return head;
        ListNode* temp = head;

        while(temp != NULL && temp -> next!= NULL){
    
            if(temp -> next -> val == val1){
               temp -> next = temp -> next -> next;
            }else {
                temp =temp ->next;
            }
        }    
            if(head -> val == val1){
                return head -> next;
            }
        return head;
    }
};