class Solution {
public:
    //Three approaches
   // 1st approach time = O(n2) | space = O(1)
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i =0; i< n; i++){
            for(int j =i+1; j<n;j++){
        if(nums[i] + nums[j] == target){
            return {i,j};
        }
        }
            
    }
        return {-1,-1};  // leetcode syntax to give something at the last
    }
       /*
     2nd approach time = O(n) | space = O(n)
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> m;
        for(int i =0; i< n; i++){
          m[nums[i]] = i; // return the index value across of the no. 
    }
        return {-1,-1};  // leetcode syntax to give something at the last
    }
    */
    //3rd approach
        
};