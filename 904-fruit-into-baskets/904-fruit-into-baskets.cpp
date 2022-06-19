class Solution {
public:
    // Longest Substring with 2 unique characters
    // variable size window
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int j = 0, i=0;
        int mx = INT_MIN;
        
        unordered_map<int , int> mp;
        while(j<n){
            mp[fruits[j]]++;
            if(mp.size() < 2){
              mx = max(mx,j-i+1);
              j++;
            }else if(mp.size() == 2){
                mx= max(j-i+1 , mx);
                j++;
            }
            else if(mp.size() > 2){
                while(mp.size() > 2){
                mp[fruits[i]]--;
                if(mp[fruits[i]] == 0){
                    mp.erase(fruits[i]);
                }
                    i++;
            }
                j++;
            }
        }
        return mx;
    }
};