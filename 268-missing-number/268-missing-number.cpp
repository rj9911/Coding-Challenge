class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int XOR = 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            XOR ^= nums[i];
        }
        for(int i=1;i<=n;i++){
            XOR ^= i;
        }
        return XOR;
    }
};