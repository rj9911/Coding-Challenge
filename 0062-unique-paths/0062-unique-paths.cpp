class Solution {
public:
    int uniquePaths(int m, int n) {
          int dp[m][n];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0) dp[i][j] = 1;
    // If we are on the first row of the grid, set the number of unique paths to 1, since we can only move right from these positions.            
                if(j==0) dp[i][j] = 1;
            }
        }
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++){
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
 //  Set the number of unique paths to the current position as the sum of the number of unique paths to the position to the left of it and the position above it.               
            }
        }
        return dp[m-1][n-1];
    }
};