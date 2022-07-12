class Solution {
public:
    bool makesquare(vector<int>& matchsticks) {
         int sum=accumulate(matchsticks.begin(),matchsticks.end(),0);
        if(sum%4!=0 || matchsticks.size()<4) return false;
        vector<int> square(4,0);
        sort(matchsticks.begin(),matchsticks.end(),greater<>());
        return helper(matchsticks,square,sum/4,0);
    }
    bool helper(vector<int>& ms,vector<int>& square,int side,int i){
        if(i==ms.size()) return true;
        for(int j=0;j<4;j++){
            if(square[j]+ms[i]<=side){
                square[j]+=ms[i];
                if(helper(ms,square,side,i+1)) return true;
                square[j]-=ms[i];
            }    
        }
        return false; 
    }
};