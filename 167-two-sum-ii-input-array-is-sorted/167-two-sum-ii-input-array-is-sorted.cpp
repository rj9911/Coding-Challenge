class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int left = 0;
        int right= n-1;
        vector<int> v;
        
        while(left < right){
            if(numbers[left] + numbers[right] == target){
                 v.push_back(left+1);
                 v.push_back(right+1);
                break;
        }  else if(numbers[left] + numbers[right] < target)
                left++;
            else if(numbers[left] + numbers[right] > target) 
                right--;
        }
       
        return v;
    }
};