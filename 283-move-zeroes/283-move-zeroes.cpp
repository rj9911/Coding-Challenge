class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        for(const int num : nums)
          if(num != 0)
             nums[i++] = num;
    
        if(i < nums.size())
          while(i<nums.size())
            nums[i++] = 0;
    }
};