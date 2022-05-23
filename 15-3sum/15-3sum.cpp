class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
       /* int n = nums.size();
        for(int i = 0 ; i < n ; i++){
         for( int j = i + 1 ; j < n ; j ++ ){
             for(int k = j + 1; k<n ;k++){
                 if(nums[i] + nums[j] + nums[k] == 0)
                     return {i ,j };
             }
         }   
          
        }
         return { -1,-1};
     */
        sort(nums.begin() , nums.end());
        vector<vector<int>>res;
        
        // moves for a
        for(int i = 0 ; i< nums.size() ;i++){
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
                int low = i+1 , high = nums.size() - 1 , sum = 0 - nums[i];
                
                while(low < high){
                    if(nums[low] + nums[high] == sum){
                        vector<int> temp;
                        temp.push_back(nums[i]);
                            temp.push_back(nums[low]);
                            temp.push_back(nums[high]);
                            res.push_back(temp);
            while(low < high && nums[low] == nums[low +1]) low++;
            while(low < high && nums[high] == nums[high -1]) high--;
            
            low++ ,high--;
                    }
        else if(nums[low] + nums[high] < sum) low++;
        else high--;
                }
            }
        }
        return res;
  }
};