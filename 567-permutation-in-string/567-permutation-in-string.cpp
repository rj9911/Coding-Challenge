class Solution {
public:
    bool checkInclusion(string s1, string s2) {
      unordered_map<char ,int>mp;
       for(auto nums:s1){
           mp[nums]++;
       }
       int j = 0 , k =s1.size() , count=mp.size() , n=s2.size();
       int i = 0;
        while(j<n){
            if(mp.find(s2[j]) != mp.end()){
            mp[s2[j]]--;
            if(mp[s2[j]] == 0)
                count--;
            }
            if(j-i+1 < k)
                j++;
            else if(j-i+1 == k){
                if(count == 0){
                    return true;
                }
                if(mp.find(s2[i]) != mp.end()){
                mp[s2[i]]++;
               if(mp[s2[i]] == 1)
        //if(mp[s2[i]] > 0)❌
                   count++;
                }
                i++;
                j++;
            }
        }
        return false;    
    }
};