class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       // Extension of Moore's Voting Algo ( Two elements can be possible appears
       //greater than n/3)
       vector<int> v;
       int count1=0 , count2=0 , ele1= INT_MIN, ele2= INT_MIN; // ele1 can also be
       // -ve or zero.
       int n = nums.size();
       for(int i=0; i<n;i++){
           if(ele1 == nums[i]) count1++;
           else if(ele2 == nums[i]) count2++;
           else if(count1== 0){
               ele1 = nums[i];
               count1++;
           }else if(count2 == 0){
               ele2 = nums[i];
               count2++;
           }else{
               count1--; count2--;
           }
       }
       count1 =0; count2=0;
       for(int i=0;i<n; i++){
           if(ele1==nums[i]) count1++;
           if(ele2==nums[i]) count2++;
        }
       if(count1 > n/3) v.push_back(ele1);
       if(count2 > n/3) v.push_back(ele2);
       return v;
    }
};