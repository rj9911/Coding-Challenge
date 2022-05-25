class Solution {
public:
    bool isSubsequence(string s, string t) {
         if((s.size() || t.size()) == 0)
            return true;
        int n= s.size();
        
        int i = 0 ,j = 0 ,count = 0;
        while(i< n && j < t.size()){
            if(s[i] == t[j]){
                count++;
                i++;
                j++;
            }else{
                j++; 
    }
        }
        if(count == n)
            return true;
        else
       return false;
        
    }
};