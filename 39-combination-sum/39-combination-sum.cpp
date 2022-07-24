class Solution {
public:
    // See the decision tree in copy
    vector<vector<int>> ans;
    void help(int i ,vector<int>& C, int t, vector<int>& sol){
        if(t == 0){
            ans.push_back(sol);
            return;
        }
        if(t < 0) return; //  As Not a good case.
        if(i == C.size()) return; // As we will not get anything after that.
        
        // Skip the ith elem
        help(i+1, C, t,sol);
        
        // pick the ith elem
        sol.push_back(C[i]);
        help(i, C, t-C[i] , sol);
        
        // Backtracking
        sol.pop_back();
    
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> sol;
        help(0, candidates, target, sol);
        return ans;
    }
};