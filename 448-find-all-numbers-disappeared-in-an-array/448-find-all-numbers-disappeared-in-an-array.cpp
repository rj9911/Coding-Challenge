class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        set<int> s;
        vector<int> v;
        int n= nums.size();
        for(int i= 0 ;i<n;i++){
            s.insert(nums[i]);
        }
        for(int i = 1; i<= n;i++){
            if(s.find(i) == s.end())
                v.push_back(i);
        }
        
      return v;
    }
};