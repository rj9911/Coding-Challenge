class Solution {
public:
    int firstMissingPositive(vector<int>& ar) {
      /*  int n = nums.size(); 
            set<int> s;
            for(int i = 0; i< n ; i++){
                s.insert(nums[i]);
            }
            for(int i = 1; i <= n; i++){
              if(s.find(i) == s.end())
                   return i;
            }
        return nums.size() + 1;
        */
       /* int n = nums.size();
        unordered_map<int , int>mp;
        for(int i = 0; i< n; i++){
            mp[nums[i]]++;
        }
        for(int i = 1;i<= n;i++){
            if(mp.find(i) == mp.end())
                return i;
        }
        return nums.size() + 1;
        */
    

        int n = ar.size();

    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i] <= 0)
        {
            ar[i] = n + 1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int index = abs(ar[i]) - 1;
        if((index >= 0 && index < n) && (ar[index] > 0))
        {
            ar[index] *= -1;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > 0)
        {
            return i + 1;
        }
    }
    return n + 1;
    }
};