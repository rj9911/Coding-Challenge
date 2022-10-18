class Solution {
public:
    int count(int a){
        int cnt=0;
        while(a){
            if(a&1 != 0) cnt++;
            a>>=1;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> v;
        for(int i=0;i<=n;i++){
            int ans = count(i);
            v.push_back(ans);
        }
        return v;
    }
};