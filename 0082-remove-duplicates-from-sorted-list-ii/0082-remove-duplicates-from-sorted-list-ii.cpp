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
    ListNode* deleteDuplicates(ListNode* head) {
       vector<int> v;
       map<int,int> mp;
       ListNode *temp=head;
       while(temp){
           mp[temp->val]++;
           temp=temp->next;
       }
       for(auto i:mp){
           if(i.second == 1) v.push_back(i.first);
       }
       ListNode *nod = new ListNode();
       temp=nod;
       for(auto x:v){
           ListNode *t = new ListNode(x);
           temp->next=t;
           temp=temp->next;
       }
        return nod->next;
    }
};