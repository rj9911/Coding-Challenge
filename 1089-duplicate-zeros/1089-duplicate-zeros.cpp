class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while(i < n){
              if( i == n - 1)
                    break;
            if(arr[i] == 0){
              arr.pop_back();  
              arr.insert(arr.begin() + i , 0);
              //  arr[i+1] = 0;
               // arr[i+2] = temp;
                i = i + 2;  
            }
            else{
                i++;
            }
        }
    }
};