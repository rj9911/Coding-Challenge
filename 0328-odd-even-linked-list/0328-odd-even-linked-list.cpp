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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> v,odd,even;
        ListNode *temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<v.size();i++){
            if(i%2==0) odd.push_back(v[i]);
            else if(i%2) even.push_back(v[i]);
        }
        
        temp=head;
        for(int i=0;i<odd.size();i++){
            temp->val=odd[i];
            temp=temp->next;
        }
        for(int i=0;i<even.size();i++){
            temp->val=even[i];
            temp=temp->next;
        }
        return head;
    }
};