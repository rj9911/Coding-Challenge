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
            
              lsum += nums[j];
            if(lsum == rsum){
                return j;
                break;
            }else{
                rsum -= nums[j];
            }
        }
        return -1;
    }
};