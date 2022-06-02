class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      /*  int n = nums.size(); 
            set<int> s;
            for(int i = 0; i< n ; i++){
                s.insert(nums[i]);
            }
            for(int i = 1; i <= n; i++){
              if(s.find(i) == s.end())
                   return i;
            }
        return nums.size() + 1;
        */
       /* int n = nums.size();
        unordered_map<int , int>mp;
        for(int i = 0; i< n; i++){
            mp[nums[i]]++;
        }
        for(int i = 1;i<= n;i++){
            if(mp.find(i) == mp.end())
                return i;
        }
        return nums.size() + 1;
        */
    

   
       int n = nums.size();
        for(int i = 0; i< n; i++){
            if(nums[i] <= 0){
                nums[i] = n+1;
            }
        }
        for(int i = 0 ; i< n ; i++){
            int mark = abs(nums[i]) - 1;
            if((mark >= 0 && mark < n) && (nums[mark] > 0)){
                nums[mark] *= -1;
            }
        }
        for(int i = 0 ; i < n; i++){
            if(nums[i] > 0){
                return i+1;
            }
        }
            
    return n + 1;
    }
};