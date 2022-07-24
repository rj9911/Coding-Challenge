class Solution {
public:
    vector<vector<int>> ans;
    void help(int i ,vector<int>& C, int t, vector<int>& sol, int k){
        if(t == 0 && k == 0){
            ans.push_back(sol);
            return;
        }
        if(t < 0 || k< 0) return; //  As Not a good case.
        if(i == C.size()) return; // As we will not get anything after that.
        
        // Skip the ith elem
        help(i+1, C, t,sol,k);
        
        // pick the ith elem
        sol.push_back(C[i]);
        help(i+1, C, t-C[i] , sol,k-1);  //
        
        // Backtracking
        sol.pop_back();
    
    }
    vector<vector<int>> combinationSum3(int k, int t) {
        vector<int> candidates = {1,2,3,4,5,6,7,8,9}; 
                vector<int> sol;
        help(0, candidates, t, sol, k);
        return ans;
    }
};