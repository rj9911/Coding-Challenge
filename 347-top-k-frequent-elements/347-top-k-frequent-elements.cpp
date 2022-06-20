class Solution {
public:
    typedef pair<int , int> ppi;
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<ppi , vector<ppi> , greater<ppi>> minh;
        unordered_map<int ,int> mp;
        vector<int> result;
        
        for(auto num : nums){
            mp[num]++;
        }
        
        for(auto i = mp.begin() ; i != mp.end() ; i++){
            minh.push({i -> second , i -> first});
            if(minh.size() > k){
                minh.pop();
            }
        }
        
        while(minh.size() > 0){
            result.push_back(minh.top().second);
            minh.pop();
        }
        return result;
    }
};