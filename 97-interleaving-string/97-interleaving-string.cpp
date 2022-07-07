class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
     int n1=s1.size(),n2=s2.size(),n3=s3.size();
        
        if(n1+n2 != n3) return false;
        if(s1=="") return s2==s3;
        if(s2=="") return s1==s3;
        
        vector<vector<int>> dp(n1+1,vector<int>(n2+1,0));
       // base cases (when one or both strings have ended,that is either in above recurrence relation either index j=s1.size() or index k=s2.size() or both) 
        dp[n1][n2] = true;
        for(int t1=n2-1;t1>=0;t1--)
            dp[n1][t1] = (s3[n1+t1]==s2[t1] && dp[n1][t1+1])?1:0;
        for(int t2=n1-1;t2>=0;t2--)
            dp[t2][n2] = (s3[n2+t2]==s1[t2] && dp[t2+1][n2])?1:0;
        
        for(int j = n1-1;j>=0;j--)
        {
            for(int k = n2-1;k>=0;k--)
            {
                dp[j][k] = ((s1[j]==s3[j+k] && dp[j+1][k]) || (s2[k]==s3[j+k] && dp[j][k+1]))?1:0;
                //cout<<"dp["<<j<<"]["<<k<<"] = "<<dp[j][k]<<"\n";
            }
        }
        return dp[0][0];
    }
};