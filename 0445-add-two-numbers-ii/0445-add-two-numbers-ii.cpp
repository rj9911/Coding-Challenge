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
    ListNode *reverse(ListNode* head){
        ListNode* curr=head,*next=NULL,*prev=NULL;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;   
    }
    ListNode* addTwoNumbers(ListNode* head1, ListNode* head2){
        head1 = reverse(head1);
        head2 = reverse(head2);
        
       vector<int> v1,v2,v;
        ListNode *temp1=head1;
        ListNode *temp2=head2;
        while(temp1){
            v1.push_back(temp1->val);
            temp1=temp1->next;
        }
        while(temp2){
            v2.push_back(temp2->val);
            temp2=temp2->next;
        }
        int n=v1.size(),m=v2.size(), i=0,j=0,carry=0;
        while(i<n || j<m ){
            int sum=0;
            if(i<n && j<m) sum = sum+v1[i]+v2[j]+carry;
            else if(i<n) sum = sum+v1[i]+carry;
            else sum=sum+v2[j]+carry;
            
            v.push_back(sum%10);
            carry=sum/10;
            i++,j++;
        }
        if(carry>0)
        v.push_back(carry);
        
        ListNode *temp=new ListNode(v[0]);
        ListNode *t1 = temp;
        for(int i=1; i<v.size();i++){
            ListNode *p = new ListNode(v[i]);
            t1->next=p;
            t1=t1->next;
        }
        temp = reverse(temp);
        return temp;
        
    }
};