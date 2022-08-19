class Solution {
public:
    int findMaxForm(vector<string>& str, int m, int n) {
        
        vector<vector<vector<int>>>dp(str.size()+1 , vector<vector<int>> (m+1 , vector<int> (n+1)));
        
        for(int i = 1 ; i <= str.size() ; i++){
            
            int countzeroes = count(str[i-1].begin() , str[i-1].end() , '0'); // For 0 indexing validation.
            int countones = str[i-1].size() - countzeroes;
            
            for(int j = 0 ; j <= m ; j++){
                for(int k = 0 ; k <= n ; k++){
                    // Two Choices
                    
                    if(j-countzeroes >= 0 && k-countones >= 0)
                      dp[i][j][k] = max(1 + dp[i-1][j-countzeroes][k-countones], dp[i-1][j][k]);
                    else
                      dp[i][j][k] = dp[i-1][j][k];
                }
            }
        }
        
        return dp[str.size()][m][n];
    }
};