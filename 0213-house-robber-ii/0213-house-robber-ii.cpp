class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1) {
            return nums[0];
        }
        
        // dp1[i] represents the maximum amount of money that can be robbed up to house i
        vector<int> dp1(n);
        dp1[0] = nums[0];
        dp1[1] = max(nums[0], nums[1]);
        for (int i = 2; i < n-1; i++) {
            dp1[i] = max(dp1[i-1], dp1[i-2] + nums[i]);
        }
        
        // dp2[i] represents the maximum amount of money that can be robbed up to house i
        vector<int> dp2(n);
        dp2[0] = 0;
        dp2[1] = nums[1];
        for (int i = 2; i < n; i++) {
            dp2[i] = max(dp2[i-1], dp2[i-2] + nums[i]);
        }
        
        return max(dp1[n-2], dp2[n-1]);
    }
};

// One approach is to use the dynamic programming approach similar to the original House Robber problem. We can consider two cases: either we rob the first house and not the last house, or we rob the last house and not the first house. Then, we can use the original House Robber algorithm to find the maximum amount we can rob in each case, and return the larger of the two. 

// start+i refers to the index of the nums array that we are currently processing. We start from the start index and keep adding i to it to get the index of the current element in nums.

//For example, if start=2 and i=3, then start+i=5. This means we are currently processing the 5th element in nums.

//In the context of the problem, start and end indices define a range of houses to be robbed. By adding i to start, we are iterating over all the houses in the given range,

