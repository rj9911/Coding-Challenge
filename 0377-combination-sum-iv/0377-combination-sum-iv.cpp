class Solution {
public:
   int combinationSum4(vector<int>& nums, int target) {
    vector<unsigned int> dp(target + 1, 0); //represents the number of possible combinations that add up to the target i
    dp[0] = 1; // there is exactly one way to get a target of 0 (by not choosing any number).
    for (int i = 1; i <= target; i++) {
        for (int num : nums) {
            if (num <= i) {
                dp[i] += dp[i - num]; //  number of ways to get a target of i - num
            }
        }
    }
    return dp[target];
}
// This problem has the property of "optimal substructure", which means that the solution to the problem can be obtained by combining the solutions to its subproblems.

};