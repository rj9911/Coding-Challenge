/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
 public:  // Extra Space
  Node* copyRandomList(Node* head) {
    unordered_map<Node* , Node* > mp;
     Node *temp=head;
      while(temp){
          Node *copy= new Node(temp->val);
          mp[temp] = copy; // Deep Copying the Node
          temp=temp->next;
      }
      temp=head;
      while(temp){
          mp[temp]->next=mp[temp->next];   // Storing the next pointers values
          mp[temp]->random=mp[temp->random]; // Random Pointer values
          temp=temp->next; 
      }
      return mp[head];
  }

};