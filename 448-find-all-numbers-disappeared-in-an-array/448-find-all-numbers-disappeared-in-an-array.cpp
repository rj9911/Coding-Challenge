class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        /*
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
        
      return v; */
      map<int , int>mp;
        int n = nums.size();
      vector<int> v;
      for(int i=0;i<n;i++){
          mp[nums[i]]++;
      }
    for(int i = 1;i<=n;i++){
        if(mp.find(i) == mp.end()){
            v.push_back(i);
        }
    }
        return v;
    }
};