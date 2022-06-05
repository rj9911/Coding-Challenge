class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
     //  GFG Problem
       int i = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        int j = m - 1;
        while((i>=0 && i < n) && (j >= 0 && j< m )){
            if(matrix[i][j] == target) 
                return true;
            if(matrix[i][j] > target)
                j--;
            else
                i++;
        }
        return false;
    
        /*Leetcode Problem*/
     /*   if(matrix.size() == 0) return false;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        int low = 0;
        int high = (n*m) - 1;
        
        while(low <= high){
            int mid = (low + (high - low) / 2 );
            
            if(matrix[mid / m][mid % m] == target)
                return true;
            if(matrix[mid / m][mid % m] < target)
                low = mid + 1 ;
            else 
                high = mid - 1;
        
        }
        return false;
        */
    }
};