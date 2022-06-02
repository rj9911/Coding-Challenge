class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size() ;
        int cur = 1;
        vector<int>solve(n , 1);
        for(int i = 0 ; i< n ;i++){
            solve[i] *= cur;
            cur *= nums[i];
        }
        int cur1 = 1;
        for(int i = n-1 ; i>= 0;i--){
            solve[i] *= cur1;
            cur1 *= nums[i];
        }
        return solve;
    }
};