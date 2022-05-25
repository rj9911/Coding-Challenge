class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v;
        int n = nums.size();
        int i = 0;
        while(i < n){
            if(nums[i] % 2 == 0){
                v.push_back(nums[i]);
            }
            i++;
        }
        int j = 0;
        while( j < n ){
            if(nums[j] % 2 != 0){
                v.push_back(nums[j]);
            }
            j++;
        }
        return v;
    }
};