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
    /*  map<int , int>mp;
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
        */
       vector<int>v;
       int n = nums.size();
       for(int i = 0 ; i < n ;i++){
           int mark = abs(nums[i]) - 1;
           if(nums[mark] > 0){
               nums[mark] *= -1;
           }
       } 
        for(int i = 0 ; i< n; i++){
            if(nums[i] > 0)
                v.push_back(i+1);
        }
        return v;
    }
};