class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> data(n+1, 0);
        for(auto x: trust){
            data[x[0]]--; // outdegree point to first element in the vector.
            data[x[1]]++; // indegree points to second element in the vector.
        }
        
        for(int i =1; i<= n ;i++){
            int x = data[i];
            if(x == n-1)
                return i;
        }
        return -1;
    } 
};