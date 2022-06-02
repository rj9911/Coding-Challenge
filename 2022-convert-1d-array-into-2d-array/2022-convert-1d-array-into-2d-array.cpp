class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> a(m , vector<int>(n,0));
        int k = original.size(); 
        if(m*n != k){
            return {};
        }
        else{
            for(int i = 0;i< k;i++){
             a[i / n][i % n] = original[i];
                }
        }
        return a;
    }
};