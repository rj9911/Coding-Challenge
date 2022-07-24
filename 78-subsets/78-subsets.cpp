class Solution {
public:
    void solve(int i, vector<int>& nums,vector<int> temp,vector<vector<int>>& result){
        if(nums.size() == i){
            result.push_back(temp);
        }
        else{
            // to take the ith element.
            temp.push_back(nums[i]);
            solve(i+1, nums,temp, result);
            
            temp.pop_back();
            // To ignore the ith element.
            solve(i+1, nums,temp, result);
        }
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> result;
        solve(0, nums,temp, result);
        return result;
    }
};