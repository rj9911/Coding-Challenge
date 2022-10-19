class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int> v;
        int n= nums.size();
        for(auto i : nums){
            mp[i]++;
        }
        for(auto i :mp){
            if(i.second > abs(n/3)) v.push_back(i.first);
        }
        return v;
    }
};