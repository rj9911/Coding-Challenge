class Solution {
public:
    int kthSmallest(vector<vector<int>>& m, int k) {
        vector<int> ans;
        int n=m.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans.push_back(m[i][j]);
            }
        }
        
        sort(ans.begin() , ans.end());
        int s=ans.size();
        return ans[k-1];
    }
};