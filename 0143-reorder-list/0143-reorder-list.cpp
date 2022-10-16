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
    
    void reorderList(ListNode* head) {
        
        ListNode* temp=head;
        vector<int> v;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        
        vector<int> v1;
        int i=0, j= v.size()-1;
        while(i<j){
            v1.push_back(v[i++]);
            v1.push_back(v[j--]);
        }
        v1.push_back(v[i]);
        
        temp= head;
        int k=0;
        while(temp && k<v1.size()){
            temp->val= v1[k++];
            temp=temp->next;
        }
    }
};