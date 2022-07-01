class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
      sort(boxTypes.begin(), boxTypes.end(), [](auto &left, auto &right)
             { return left[1] > right[1]; });

        int count = truckSize;
        int ans = 0;
        for (int i = 0; i < boxTypes.size(); i++)
        {
            if(count>=boxTypes[i][0]){
                ans+=boxTypes[i][0]*boxTypes[i][1];
                count-=boxTypes[i][0];
            }
            else if(count<boxTypes[i][0]){
                ans+=count*boxTypes[i][1];
                return ans;
            }
            if(count==0) return ans;
        }
        return ans;
    }
};