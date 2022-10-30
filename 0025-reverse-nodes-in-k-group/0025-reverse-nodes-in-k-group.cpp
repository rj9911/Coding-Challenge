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
    void reverse(ListNode* s, ListNode* e){
        ListNode *prev=NULL,*curr=s,*n=s->next;
        while(prev!=e){
            curr->next=prev;
            prev=curr;
            curr=n;
            if(n) n=n->next;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(head==NULL|| head->next==NULL || k==1) return head;
       ListNode *dummy=new ListNode(-1);
       dummy->next=head;
       ListNode* beforestart=dummy,*e=head;
       int i=0;
        while(e!=NULL){
            i++;
            if(i%k==0){
              ListNode *s=beforestart->next,*temp=e->next;
                reverse(s,e);
                beforestart->next=e;
                s->next=temp;
                beforestart=s;
                e=temp;
            }else
                e=e->next;
        }
        return dummy->next;
    }
};