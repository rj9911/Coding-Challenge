class Solution {
public:
   void solve(int i, vector<int>& nums,vector<int> temp,vector<vector<int>>& result, bool pre){
        if(nums.size() == i){
            result.push_back(temp);
        }
        else{
            solve(i+1, nums,temp, result, false);
            
            if(i>0 && nums[i] == nums[i-1] && (!pre)) return;
             // to take the ith element.
            
            temp.push_back(nums[i]);
            solve(i+1, nums,temp, result, true);
            // Backtracking is same as recursion
            
            temp.pop_back(); // This step is Backtracking
            // Backtracking is to undue some changes that we did in line      9.,and see result
            // To ignore the ith element.
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        // This is working only for n < 20 after than it won't works.
        sort(nums.begin(), nums.end());
        vector<int> temp;
        vector<vector<int>> result;
        solve(0, nums,temp, result, false);
        return result;
    }
};