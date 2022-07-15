class Solution {
public:
    
    vector<int> dr = {0, -1, 0, 1};
    vector<int> dc = {1, 0, -1, 0};
    int M = 0, N = 0;
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        this->M = grid.size();
        this->N = grid[0].size();
        
        vector<vector<bool>> isViz(M, vector<bool>(N, false));
        
        int maxArea = 0;
        
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j] && !isViz[i][j]){
                    maxArea = max(maxArea, islandArea(i, j, grid, isViz));
                }        
            }
        }
        
        return maxArea;
    }
    
    bool isWithin(int r, int c){
        return (r >= 0 && r < M && c >= 0 && c < N);
    }
    
    int islandArea(int r, int c, vector<vector<int>>& grid, vector<vector<bool>>& isViz){
        
        isViz[r][c] = true;
        int area = 1;
        
        for(int i = 0;i<4;i++){
            if(isWithin(r + dr[i], c + dc[i]) && grid[r + dr[i]][c + dc[i]] && !isViz[r + dr[i]][c + dc[i]]){
                area += islandArea(r + dr[i], c + dc[i], grid, isViz);
            }
        }
        return area;
    }
};