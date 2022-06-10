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
     /*   if(head == NULL)
            return head;
        ListNode* temp = head;

        while(temp != NULL && temp -> next!= NULL){
    
            if(temp -> next -> val == val1){
               temp -> next = temp -> next -> next;
            }else {
                temp =temp ->next;
            }
            
            if(head -> val =val1)
                return head -> next;
        }
        return head;*/
         ListNode* k = head;
        
        if(head==NULL){
            return head;
        }
        while(k!=NULL && k->next!=NULL){
            //if(head->val=val){head=head->next; k = head;}
            if(k->next->val==val){
                k->next = k->next->next;
            }
            else{
                k = k->next;
            }
        }
        if(head->val==val){
            return head->next;
        }
        return head;
    }
};