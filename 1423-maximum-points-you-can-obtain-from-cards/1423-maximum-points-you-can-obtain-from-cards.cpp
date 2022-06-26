class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n = nums.size();
        int wsum =0,tsum =0, rsum = INT_MIN;
        for(int i =0;i<n;i++){
            tsum += nums[i];  // Total Sum
        }
        int j = 0 , i = 0 , k1 = n-k;
         if(k1 == 0) {
                rsum = max(rsum , tsum);   // Edge Case
                return rsum;
           }
       while(j<n){
           wsum += nums[j];
           if(j-i+1 < k1){
               j++;
           }else if(j-i+1 == k1){
               rsum = max(rsum , tsum - wsum); // Answer Got
               wsum -= nums[i];  // Remove the calc.
               j++;   // Slide window
               i++;
           }
       }
        
        return rsum;
    }
};