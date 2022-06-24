class Solution {
public:
    // In Two Pointer method
    // sort the array first.
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int diff = INT_MAX;
        int ans= 0;
        sort(nums.begin() , nums.end());
        
        for(int i =0; i<n ;i++){
            int first = nums[i];
            int start = i+1 ,end = n-1;
            while(start<end){
                if(first + nums[start] + nums[end] == target) return target;
                else if(abs(first + nums[start] + nums[end] - target) < diff){
                    
                    diff = abs(first + nums[start] + nums[end] - target);
                    ans = first + nums[start] + nums[end];
                    
                }
                if(first + nums[start] + nums[end] > target) end--;
                else if(first + nums[start] + nums[end] < target) start++;
            }
        }
        return ans;
    }
};