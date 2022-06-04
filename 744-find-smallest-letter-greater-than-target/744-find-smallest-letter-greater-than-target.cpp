class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    /*   for(int i = 0;i<letters.size();i++){
           if(letters[i] > target){
               return letters[i];
           }
       }
        return letters[0];
        */
        int n = letters.size();
       int start = 0; 
        int end= n -1;
        char res = letters[0];
        
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(letters[mid] <= target)
                start = mid +1;
            else if(letters[mid] > target){
                res = letters[mid];   
                end = mid - 1;
            }
        }
        
        return res;
    }
};