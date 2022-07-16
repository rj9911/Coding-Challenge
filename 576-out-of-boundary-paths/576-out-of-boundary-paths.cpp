class Solution {
public:
int findPaths(int n, int m, int k, int sr, int sc) {
    vector <vector <int>> dp(n, vector <int>(m, 0));
    dp[sr][sc] = 1;
    int d[5] = {0, 1, 0, -1, 0};
    int ret = 0, p = (sr + sc) % 2, mod = 1e9+7;
    for (int t = 0; t < k; t++) {
    for (int i = 0; i < n; i++) 
    for (int j = 0; j < m; j++) 
        if ((i + j) % 2 == p) { // cell parity matched
            for (int r = 0; r < 4; r++) {
                int x = d[r] + i, y = d[r + 1] + j;
                if (x < 0 || y < 0 || x >= n || y >= m) {
                    ret = (ret + dp[i][j]) % mod;
                    continue ;
                }    
                dp[x][y] = (dp[x][y] + dp[i][j]) % mod;
            }
            dp[i][j] = 0; // directly empty dp at this parity
        }
        p = 1 - p; // next move change parity
    }
    return ret;
}
};