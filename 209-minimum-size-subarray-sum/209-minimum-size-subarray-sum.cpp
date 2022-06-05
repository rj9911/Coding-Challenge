class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     /*   int i = 0, j= 0;
        int sum = 0;
        int minWindow = INT_MAX;
        int n = nums.size();
        while(j < n){
            //calculation part
            sum = sum + nums[j];
            if(sum < target)
                j++;
            else if(sum > target){
              while(sum > target){
                  sum = sum - nums[i];
                  i++;
              }
                j++;
            }
            else if(sum == target){
                minWindow = min(j-i+1 , minWindow);
                j++;
            }
        }
        return minWindow; */
         int i = 0, j= 0;
        int sum = 0;
        int minWindow = INT_MAX;
        int n = nums.size();
        while(j < n){
            //calculation part
            sum = sum + nums[j];
            if(sum < target)
                j++;
            else if(sum>=target){
              while(sum >= target){
                  minWindow = min(j-i+1 , minWindow);
                  sum = sum - nums[i];
                  i++;
              }
                j++;
            }
        }
        if(minWindow == INT_MAX || minWindow < 0)
            return 0;
        return minWindow; 
    }
};