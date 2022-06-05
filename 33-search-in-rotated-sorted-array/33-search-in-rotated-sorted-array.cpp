class Solution {
public:
   int findMin(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        int mid;
        while(start<=end){
            mid = start + (end - start)/2;
            if(nums[start] <= nums[end])
                return start;
            int prev= (mid+n-1)%n;
            int next = (mid+1)%n;
            if(nums[mid] <= nums[prev] && nums[mid] <= nums[next])
                return mid;
            else if(nums[start] <= nums[mid])
                start = mid + 1;
            else if(nums[mid] <= nums[end])
                end = mid -1;
        }
        return mid;
    }
 int search(vector<int>& nums,int start,int end,int target) {
        while(start<=end){            
            int mid = start - (start - end) / 2;
            if(nums[mid] == target){
                return mid;
            }
            else if(target < nums[mid]){
                end =mid - 1;
            }
            else{
                start = mid + 1 ;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int minindx = findMin(nums);
        int n = nums.size();
        int start = 0;
        int end = n-1;
        int a = search(nums,start , minindx-1 , target); 
        int b = search(nums, minindx ,n-1, target);
        if(a != -1 && a>=0)
            return a;
        else if(b != -1 && b>=0)
            return b;
        return -1;
    }
    /*
       int search(vector<int>& nums, int target) {
           int s =0 ;int n =nums.size();
           int e= n-1;
           int m;
           while(s<=e){
               m = s + (e-s)/2;
               
           }
       }*/
};