class Solution {
public:
    int maxArea(vector<int>& height){
        int n = height.size();
        int left = 0 , right = n  -1;
        int area = 0 ,area_next = 0;
        while(left < right){
            int length = min(height[left] , height[right]);
            int width = right - left;
            
            area_next = length * width;
            
            area =  max(area , area_next);
            
            if(height[left] < height[right])
                left++;
            else
                right--;
        }
        return area;
    }
};