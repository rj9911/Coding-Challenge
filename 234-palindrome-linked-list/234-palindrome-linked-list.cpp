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
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        ListNode* temp = head;
        int n = 0;
        while(temp != NULL){
            v.push_back(temp -> val);
            temp = temp -> next;
            n++;
        }
        
        int low = 0, high = n-1;
        while(low < high){
            if(v.at(low) != v.at(high))
                return false;
            else {
                low++;
                high--;
            }
        }
        return true;
    }
};