class Solution {
public:
    // Equilibrium index 
    int pivotIndex(vector<int>& nums) {
        
        int sum = 0;
        int n = nums.size();
        for(int i = 0; i< n;i++){
            sum += nums[i];
        }
        
        int lsum = 0,rsum = sum,j;
        for(j = 0 ; j< n;j++){
            
            rsum -= nums[j];
            
            if(lsum == rsum)
                return j;
            
                lsum += nums[j];
        }
        return -1;
    }
};