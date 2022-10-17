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
    ListNode* reverseKGroup(ListNode* head, int k) {
       vector<int> v;
       ListNode *temp=head;
       while(temp){
           v.push_back(temp->val);
           temp=temp->next;
       }
       int s=v.size(),start=0,end=k;
       while(k<=s){
           reverse(v.begin()+start,v.begin()+end);
           start+=k;
           end+=k;
           s-=k;
       }
       temp=head;
       for(int i=0;i<v.size();i++){
           temp->val=v[i];
           temp=temp->next;
       }
        return head;
    }
};