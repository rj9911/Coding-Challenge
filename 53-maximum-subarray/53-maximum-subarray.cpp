class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        /*int sum = 0, maxi = nums[0];
            
        for(int i = 1;i <= nums.size(); i++){
            sum += nums[i];
            if(sum > maxi) maxi = sum;
             if(sum < 0) sum = 0;
        }
        return maxi;
        */
        
         int max_sum=nums[0], sum=nums[0];
        for(int i=1; i<nums.size(); i++) {
            sum = max(nums[i], sum+nums[i]);
            if(sum>max_sum) {
                max_sum=sum;
            }
        }
        
        return max_sum;
    }
};