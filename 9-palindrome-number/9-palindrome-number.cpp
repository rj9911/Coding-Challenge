class Solution {
public:
    
    int reversenum(int n){
        long long nums= 0;
        while(n > 0){
            nums = nums * 10 + n % 10;
            n = n / 10;
        }
        return nums;
    }
    
    bool isPalindrome(int x) {
       int rev_num = reversenum(x);
        
       if(rev_num == x)
           return true;
        
        
     return false;
    }
};