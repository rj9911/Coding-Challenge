class Solution {
public:
    vector<vector<int>> ans;
    void help(int i , int t, vector<int>& sol, int k){
        if(t == 0 && k == 0){
            ans.push_back(sol);
            return;
        }
        if(t < 0 || k< 0) return; //  As Not a good case.
        if(i == 10) return; // As we will not get anything after that.
        
        // Skip the ith elem
        help(i+1, t,sol,k);
        
        // pick the ith elem
        sol.push_back(i);
        help(i+1, t-i , sol,k-1);  //Don't include the same i again.
        
        // Backtracking
        sol.pop_back();
    
    }
    vector<vector<int>> combinationSum3(int k, int t) {
     //   vector<int> candidates = {1,2,3,4,5,6,7,8,9};
    
        vector<int> sol;
        help(1, t, sol, k);
        return ans;
    }
};