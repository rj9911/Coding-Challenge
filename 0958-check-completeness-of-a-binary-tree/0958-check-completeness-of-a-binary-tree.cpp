/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(root==NULL) return true;
        
        queue<TreeNode*> q;
        q.push(root);
        
        bool seenNull=false;
        
        while(!q.empty()){
            TreeNode* node= q.front();
            
            q.pop();
            if(node == NULL){ 
                seenNull = true;  // if you find NULL in the tree Array in between nodes then false
                continue;
            }
            
            if(seenNull) return false;
            
            q.push(node->left);
            q.push(node->right);
        }
        
        return true;
    }
};