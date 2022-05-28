class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      /*  vector<int >ans;
        unordered_map<int , int>mpp;
        for(int i = 0 ; i < nums.size(); i++ ){
            if(mpp.find(target - nums[i]) != mpp.end()){
                ans.push_back(mpp[target - nums[i]]);
                ans.push_back(i);
                return ans;
            }   
            else{
                mpp[nums[i]] = i;
            }
        }
        return ans;*/
        vector<int>res , temp;
        temp = nums;
        
        sort(nums.begin() , nums.end());
        int n = nums.size();
        int left = 0, right = n - 1;
     while(left<right){
         if(nums[left ] + nums[right] == target){
             break;
         }
         else if(nums[left ] + nums[right] < target)  left++;
         else right--;
     }
        for(int i = 0 ; i< temp.size() ; i++){
            if(temp[i] == nums[left])
                res.push_back(i);
           else if(temp[i] == nums[right])
                res.push_back(i);
        }
        return res;
    }
};