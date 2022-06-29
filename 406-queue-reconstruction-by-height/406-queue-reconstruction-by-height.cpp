class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(),people.end(),[](vector<int>p1,vector<int>p2){
            return (p1[0]<p2[0]); 
        });
        vector<vector<int>>ans(people.size(),vector<int>(2,-1));
        for(int i=0;i<people.size();i++)
        {
            int cnt=people[i][1];
            for(int j=0;j<people.size();j++)
            {
                if(cnt==0 && ans[j][0]==-1)
                {
                    ans[j]=people[i];
                }
                else if(ans[j][0]<people[i][0] && ans[j][0]!=-1)
                {
                    continue;
                }
                cnt--;
            }
        }
        return ans;
    }
};