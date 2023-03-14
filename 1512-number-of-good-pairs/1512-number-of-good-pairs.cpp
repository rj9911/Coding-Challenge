class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size(),cnt=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(nums[i] == nums[j] && i<j) cnt++;
            }
        }
        return cnt;
    }
};