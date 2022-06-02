class Solution {
public:
   #include<bits/stdc++.h>

    int longestConsecutive(vector<int>& nums) {
            unordered_set<int> s(nums.begin() , nums.end());
	        int maxi = 0;
            int n = nums.size();
	        for(int i = 0 ; i < n;i++){
          if(s.count(nums[i] - 1) == 0){
           int k = nums[i];
           int count = 0;
           while(s.count(k)){
               count++;
               k++;
           }
           maxi = max(maxi , count);
       }
	}
	return maxi;
}
    
};