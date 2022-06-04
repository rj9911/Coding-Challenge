class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int diff = INT_MAX;
        int ans = 0;
        
        for(int i = 0; i< n ; i++){
            int l = i+1;
            int r = n-1;
            while(l<r){
                if(nums[i] + nums[l] + nums[r] == target) return target;
                else{
                    if(abs(nums[i] + nums[l] + nums[r] - target) < diff){
                        diff = abs(nums[i] + nums[l] + nums[r] - target);
                        ans = (nums[i] + nums[l] + nums[r]);
                    }
                }
                if(nums[i] + nums[l] + nums[r] < target) l++;
                else r--;
            }
        }
        return ans;
    }
};