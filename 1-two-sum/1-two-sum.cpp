class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v,temp;
        temp = nums;
        
        sort(nums.begin() , nums.end());
        int n = nums.size();
        
        int left = 0, right = n-1;
        while(left< right){
            if(nums[left] + nums[right] == target)
                break;
            else if(nums[left] + nums[right] > target)
                right--;
            else
                left++;
        }
        for(int i =0 ; i<temp.size() ;i++){
           if(temp[i] == nums[left])
               v.push_back(i);
           else if(temp[i] == nums[right])
               v.push_back(i);
        }
        return v;
    }
};