class Solution {
public:
    int trap(vector<int>& height) {
       int n = height.size();
        int left = 0 ;
        int right = n - 1;
        int maxLeft = height[left];
        int maxRight = height[right];
        int water = 0;
        while(left < right){
            if(height[left] <= height[right]){
                left++;
                maxLeft = max(maxLeft, height[left]);
                water += (maxLeft - height[left]); 
            }
            else{
                right--;
                maxRight = max(maxRight , height[right]);
                water += (maxRight - height[right]);
            }
        }
        return water;
    }
};