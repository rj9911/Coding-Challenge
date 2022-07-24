class Solution {
public://Time = Space = O(2^n) as we are making Descision tree.
    void solve(int i, vector<int>& nums,vector<int> temp,vector<vector<int>>& result){
        if(nums.size() == i){
            result.push_back(temp);
        }
        else{
            // to take the ith element.
            temp.push_back(nums[i]);
            solve(i+1, nums,temp, result);
            // Backtracking is same as recursion
            
            temp.pop_back(); // This step is Backtracking
            // Backtracking is to undue some changes that we did in line      9.,and see result
            // To ignore the ith element.
            
            solve(i+1, nums,temp, result);
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        // This is working only for n < 20 after than it won't works.
        sort(nums.begin() , nums.end());
        vector<int> temp;
        vector<vector<int>> result;
        solve(0, nums,temp, result);
        return result;
    }
};