class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int prod = 1 , n = nums.size() , maxi1 = nums[0], maxi;
        for(int i = 0 ; i < n; i++){
          if(prod == 0) prod = 1;
          prod *= nums[i];
            
          if(prod > maxi1) maxi1 = prod;
          
        }
       int prod2 = 1, maxi2 = nums[n-1];
         for(int i = n-1 ; i >= 0; i--){
          if(prod2 == 0) prod2 = 1;
          prod2 *= nums[i];
            
          if(prod2 > maxi2) maxi2 = prod2;
          
        }
        maxi = max(maxi1,maxi2);
        
        return maxi;
    }
};