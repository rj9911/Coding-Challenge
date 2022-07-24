class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
       if(n <= 1) return true;
       int st =0 , en = n-1;
       while(st < en){
           while(st<en && !isalnum(s[st])) st++;
           while(st<en && !isalnum(s[en])) en--;
           if(st<en && tolower(s[st]) != tolower(s[en])) return false;
           st++;
           en--;
       }
        return true;
    }
};