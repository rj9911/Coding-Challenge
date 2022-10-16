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
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp=head;
        vector<int> v;
        while(temp){
           v.push_back(temp->val);
            temp=temp->next;
        }
        
        int i=0,j=i+1;
        while(i<v.size() && j<v.size()){
            if(i>0) j=i+1;
            while(i<j && j<v.size()) swap(v[i++],v[j--]);
            i++;
        }
        temp=head;
        int k=0,n=v.size();
        while(k<n && temp) {
            temp->val=v[k++];
            temp=temp->next;
        }
        return head ;
    }
};