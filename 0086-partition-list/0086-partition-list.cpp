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
      vector<int> v;
      ListNode *temp =head;
      while(temp){
          if(temp->val<x) v.push_back(temp->val);
          temp=temp->next;
      }
      temp =head;
      while(temp){
          if(temp->val>=x) v.push_back(temp->val);
          temp=temp->next;
      }
      temp=head;
      int i=0;
      while(temp && i<v.size()){
          temp->val=v[i++];
          temp=temp->next;
      }
      return head;
    }
};