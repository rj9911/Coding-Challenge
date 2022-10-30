class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,maxi=INT_MIN;
        for(auto x : nums){
            if(x==1){
              count++;
             maxi=max(maxi,count);
            }else{
              maxi=max(maxi,count);
              count=0;
            }
        }
        return maxi;
    }
};