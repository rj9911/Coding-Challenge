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
    vector<int> rightSideView(TreeNode* root) {
        queue<pair<TreeNode*,int>>q;
        vector<int>ans;
        int dp[105];
        TreeNode* temp;
        if(root==nullptr)
            return ans;
        q.push({root,0});
        int lv = 0;
        while(q.size())
        {
            auto x = q.front();
            lv = x.second;
            q.pop();
            dp[x.second] = x.first->val;
            if(x.first->left != nullptr)
                q.push({x.first->left,lv+1});
            if(x.first->right != nullptr)
                q.push({x.first->right,lv+1});
        }
        for(int i = 0;i<=lv;i++)
            ans.push_back(dp[i]);
        return ans;    
    }
};