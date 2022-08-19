class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        // Time = n2 space = O(n)
        
        int n = nums.size();
        
        vector<int> dp(n+1, 1);
        int ans = 1;
        for(int i = 0 ; i< n; i++){
            for(int j = i-1; j >=0 ;j--){
                if(nums[j] < nums[i] && dp[i] < dp[j] + 1)
                    dp[i] = dp[j] + 1;
            }
            ans = max(dp[i] , ans);
        }
      return ans;
    }
};