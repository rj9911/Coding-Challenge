class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
       int n = s.size();
       
        int dp[n+1];
        set<string> st;
        memset(dp, 0, sizeof dp); 
        
        dp[n] = 1;       // This is base condition empty string is always valid segmentation.
        for(auto a : wordDict ){
            st.insert(a);
        }
       
        for(int i = n-1; i>=0; i--){
            string temp;
            for(int j = i; j< n ; j++){
                temp += s[j]; // Iterating over the characters in string from i->j->n-1 
                if(st.find(temp) != st.end()){
                 if(dp[j+1]) // This checks if the substring starting from j+1 to the end of the string is a valid segmentation
                     dp[i] = 1; //substring from i to j can be segmented using words
                }
            }
        }
        return dp[0]; // entire string s can be segmented using words 
    }
};