class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        
        for(auto &i:nums) sum+=i;
        
        target = abs(target);
        
        if(sum<target||(sum+target)%2!=0)
            return 0;
        
        int k = (sum+ target)/2;      
        
        //Count number of portions of array with sum k
        
        int n = nums.size();
        
        int dp[n+1][k+1];
        
        
        for(int i=0; i<=k;i++) dp[0][i] = 0;
        for(int i=0;i<=n;i++) dp[i][0] = 1;
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=k;j++)
            {
                if(nums[i-1] <= j)
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        
        return dp[n][k];
    }
};