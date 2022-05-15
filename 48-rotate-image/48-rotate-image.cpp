class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
       // Transpose or complement of the matrix
        for(int i = 0;i < rows;i++){
           for(int j = i ; j < rows ; j++){
               swap(matrix[i][j], matrix[j][i]);
           }
       }
        // Two pointer approach as like in the 1D array
        for(int i = 0 ; i < rows ; i++){
        int left = 0, right = rows - 1;
            while(left < right){
                swap(matrix[i][left] , matrix[i][right]);
                    left++;
                right--;
            }
        }
        
    }
};