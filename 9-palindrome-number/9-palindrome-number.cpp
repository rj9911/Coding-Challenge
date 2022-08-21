class Solution {
public:
    bool isPalindrome(int x) {
        if(x< 0) return false;
        
        string str= to_string(x);
        int n = str.size();
        
        for(int i = 0, j= n-1; i <j ; i++, j--){
            if(str[i] != str[j])
                return false;
        }
        return true;
    }
};