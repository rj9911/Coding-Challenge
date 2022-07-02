class Solution {
public:
    int maxV(vector<int> horicuts, int val){
        sort(horicuts.begin() , horicuts.end());
        
        int maxVal = horicuts[0],temp = 0;
        for(int i = 1; i< horicuts.size() ; i++){
           temp = horicuts[i] - horicuts[i-1];
           maxVal = max(maxVal , temp); 
        }
        
        maxVal = max(maxVal , val - horicuts.back());
        return maxVal;
    }
    int maxArea(int h, int w, vector<int>& horiCuts, vector<int>& vertCuts) {
        
        long x= maxV(horiCuts,h);
        long y= maxV(vertCuts,w);
        
        return x*y % 1000000007;
        
    }
};