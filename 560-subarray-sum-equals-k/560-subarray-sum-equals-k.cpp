class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // cannot apply Sliding Window
        unordered_map<int ,int> mp;
        mp[0] = 1;
       
        int count = 0,sum = 0;
        for(int i =0 ;i<nums.size() ;i++){
            sum += nums[i];
            
            if(mp[sum - k])
                count += mp[sum-k];
            // Added the rsum count from mp.
                mp[sum]++;
        }
        return count;
    }
};