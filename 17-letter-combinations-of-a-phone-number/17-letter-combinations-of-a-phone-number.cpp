class Solution {
public:
    vector<string> rec(string &D,int i, map<int, string>&m){
        if(i== D.size()) return {""};
        vector<string> temp =rec(D, i+1, m);  //
        vector<string> ans;
        for(auto a: m[D[i] - '0']){
            for(auto x: temp){
                ans.push_back(a+x);
            }
        }
        return ans;
    }
    
    vector<string> letterCombinations(string D) {
        if(D.size() == 0) return {};
        map<int , string> mp;
        mp[2] = "abc";
        mp[3] = "def";
        mp[4] = "ghi";
        mp[5] = "jkl";
        mp[6] = "mno";
        mp[7] = "pqrs";
        mp[8] = "tuv";
        mp[9] = "wxyz";
        return rec(D,0,mp); // Digits = D
    }
};