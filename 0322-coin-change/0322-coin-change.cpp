class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
         int n=coins.size();
    // Unbounded Knapsack Pattern
        
    vector<vector<int>> dp(n+1, vector<int>(amount+1,INT_MAX-1)); // Understanded
    for(int i=0;i<=n;i++) dp[i][0]=0;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=amount;j++){
            
            if(coins[i-1]>j){
                dp[i][j]=dp[i-1][j];    // Not choosen coin 
            } 
            else{
                dp[i][j]=min(dp[i-1][j], 1+ dp[i][j-coins[i-1]]); // Take it or not take it add 1 to it
            }
        }
    }
    
    return dp[n][amount]==INT_MAX-1?-1:dp[n][amount]; 
    }
};