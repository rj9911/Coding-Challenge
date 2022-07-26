class Solution {
public:
    
    bool isValid(vector<vector<int>>& image, int i, int j, int n, int m, int color){
        if( i>= 0 && i<n && j>= 0 && j<m && image[i][j] == color)
             return true;
        
        return false;
    }
    
    void floodFillRec(vector<vector<int>>& image, int i, int j, int n, int m , int color, int newcolor){
        
        image[i][j] = newcolor;
        
        if(isValid(image, i+1 , j , n , m, color))
            floodFillRec(image, i+1, j, n, m, color, newcolor);
            
        if(isValid(image, i-1 , j , n , m, color))
            floodFillRec(image, i-1, j, n, m, color, newcolor);
            
        if(isValid(image, i , j+1 , n , m, color))
            floodFillRec(image, i, j+1,n ,m , color, newcolor);
        
        if(isValid(image, i , j-1 , n , m, color))
            floodFillRec(image, i, j-1,n ,m, color, newcolor);
            
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
        
        int n = image.size();
        int m = image[0].size();
        
        int color = image[sr][sc];
        
        if(color == newcolor)
            return image;    // Edge to handle if the newcolor and color got same.
        
        floodFillRec(image , sr, sc, n, m, color, newcolor);
        
        return image;
        
    }
};