class Solution {
public:
    int majorityElement(vector<int>& nums) {
    int n = nums.size();
        
  /*  unordered_map<int, int>mp;
        int count= 0 ;
        int res = 0;
       for(auto num : nums ){
           mp[num]++;
       } 
        for(int i = 0 ; i < n ; i++){
          if(mp[nums[i]] > n/2){
              res = nums[i];
              break;
          }
        }
        return res;
        Time -> O(n)
        Space -> O(n/2) => O(n)
        No. of Majority elem = 1
        Other elems = n/2 - 1
        1 + n/2 - 1 = n/2
        */   
        sort(nums.begin() , nums.end());
        return nums[n/2];
        // Time -> O(nlogn)
        // Space -> O(1)
    }
};