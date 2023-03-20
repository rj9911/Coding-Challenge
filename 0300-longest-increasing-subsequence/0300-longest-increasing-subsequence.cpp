class Solution {
public:
    
    int lengthOfLIS(vector<int>& nums) {
        // Time = n2 space = O(n)
        
        int n = nums.size();
        vector<int> dp(n+1,0);
        int omax=0;
        for(int i=0;i<n;i++){
            int maxi=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i])
                    maxi = max(maxi, dp[j]);
            }
            dp[i] = maxi+1;
            
            if(dp[i] > omax) omax = dp[i];
        }
        
        return omax;
    }
};