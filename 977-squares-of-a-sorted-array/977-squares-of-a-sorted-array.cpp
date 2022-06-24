class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        // Using min heap
        priority_queue<int,vector<int>, greater<int>> pq;
        
        for(int i =0 ;i< n;i++){
            pq.push(nums[i] * nums[i]);
        }
        
        for(int i= 0;i<n;i++){
            nums[i]= pq.top();
            pq.pop();
        }
        return nums;
    }
};