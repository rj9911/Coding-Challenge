class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
       int n = s.size();
       
        int dp[n+1];
        set<string> st;
        memset(dp, 0, sizeof dp);
        
        dp[n] = 1;
        for(auto a : wordDict ){
            st.insert(a);
        }
       
        for(int i = n-1; i>=0; i--){
            string temp;
            for(int j = i; j< n ; j++){
                temp += s[j];
                if(st.find(temp) != st.end()){
                 if(dp[j+1])
                     dp[i] = 1;
                }
            }
        }
        return dp[0];
    }
};