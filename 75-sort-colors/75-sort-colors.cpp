class Solution {
public:
    void sortColors(vector<int>& nums) {
     
        for(int i = 0 ; i< nums.size() ; i++){
             sort(nums.begin() , nums.end());
        }
    }
    /*    int n = nums.size();
        int n0 = 0 ;
        int n1 = 0 ; 
        int n2 = 0 ;
        for(int i = 0 ; i < nums.size() ; i++ ){
            if(nums[i] == 0) 
                n0++;
            else if(nums[i] == 1)
                n1++;
            else if(nums[i] == 2)
                n2++;
         }
        for(int i = 0 ; i < n0 ; i++){
            nums[i] = 0;
        }
         for(int i = n0 ; i < (n0 + n1) ; i++){
            nums[i] = 1;
         }
         for(int i = (n1 + n0) ; i < n ; i++){
            nums[i] = 2;
    }
    }
       
     /*   
        int low = 0 ;
        int mid = 0 ;
        int high = nums.size() - 1;
        
        while(mid <= high){
            if(nums[mid] == 0){
                swap( nums[mid] , nums[low]);
                low++;
              mid++;
            }
            else if(nums[mid] == 1){
                mid++;
            }         
            else{
                swap(nums[mid] , nums[high] );
              
                high--;
            }
                                      }
                                      
    }
    */
};