class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< vector<int>> v;
        int n = nums.size();
        
        sort(nums.begin() , nums.end());
        
        for(int i = 0; i< n; i++){
          int target = -nums[i];
          int left = i+1, right =n-1;
          while(left<right){
              if(nums[left] + nums[right] == target){
                  v.push_back({nums[i] , nums[left], nums[right]});
         while(left<right && (nums[left] == nums[left+1])) left++;
         while(left<right && (nums[right] == nums[right-1])) right--;
                  right--;
                  left++;
              }else if(nums[left] + nums[right] < target){
                  left++;
              }else if(nums[left] + nums[right] > target){
                  right--;
              }
          }
        while(i+1<n && nums[i+1] == nums[i]) i++; // 
        }
        return v;
    }
};