class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n-1 , m;
        while(l<=r){
            m = l+(r-l)/2;
            if(target == nums[m])
                return true;
            else if(nums[m] == nums[l] && nums[m] == nums[r]){
                l++;
                r--;
            }
            else if(nums[l] <= nums[m]){
             if(nums[l] <= target && target < nums[m]) r = m-1; 
             else l = m+1;
            }
            else {
              if(target > nums[m] && nums[r] >= target) l=m+1;
              else
                  r=m-1;
        }
        }
        return false;
    }
};