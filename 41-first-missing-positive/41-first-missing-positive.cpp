class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size(); 
        int res = 0;
            set<int> s;
            for(int i = 0; i< n ; i++){
                s.insert(nums[i]);
            }
            for(int i = 1; i <= n; i++){
              if(s.find(i) == s.end())
                   return i;
            }
        return nums.size() + 1;
    }
};