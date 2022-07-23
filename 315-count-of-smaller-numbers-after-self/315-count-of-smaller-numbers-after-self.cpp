class Solution {
public:
   vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> vt(n);
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
            vt[i] = {nums[i],i};
        }
        mergeSort(vt,ans,0,n-1);
        return ans;
    }
    private:
    void mergeSort(vector<pair<int,int>> &vt,vector<int> &ans,int left,int right)
    {
        if(left < right)
        {
            int mid = (left+right)/2;
            mergeSort(vt,ans,left,mid);
            mergeSort(vt,ans,mid+1,right);
            merge(vt,ans,left,right,mid);
        }
    }
    void merge(vector<pair<int,int>> &vt,vector<int> &ans,int left,int right,int mid)
    {
        vector<pair<int,int>> temp(right-left+1);
        int i=left;
        int j=mid+1;
        int k = 0;
        while(i<=mid && j<=right)
        {
            if(vt[i].first <= vt[j].first)
            {
                temp[k] = vt[j]; // sort in desc order
                k++,j++;
            }
            else
            {
                ans[vt[i].second] += right-j+1;
                temp[k] = vt[i];
                k++,i++;
            }
        }
        while(i<=mid)
        {
            temp[k] = vt[i];
            k++,i++;
        }
        while(j<=right)
        {
            temp[k] = vt[j];
            k++,j++;
        }
        for(int i=left;i<=right;i++)
        {
            vt[i] = temp[i-left];
        }
    }
};