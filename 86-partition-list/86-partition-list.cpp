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
    ListNode* partition(ListNode* head, int x) {
		// Create two lists
        ListNode* head1 = new ListNode(0);
        ListNode* head2 = new ListNode(0);
		
		// Temporary pointers for traversing
        ListNode *list1 = head1, *list2 = head2;
        
        while(head){
            if(head->val < x){
                list1->next = head;
                list1 = list1->next;
            }
            else{
                list2->next = head;
                list2 = list2->next;
            }
            head = head->next;
        }
        
		// Joining list1 and list2
        list1->next = head2->next;
        list2->next = NULL;
        
        return head1->next;
    }
};