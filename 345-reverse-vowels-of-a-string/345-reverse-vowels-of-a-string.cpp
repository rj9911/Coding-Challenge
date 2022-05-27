class Solution {
public:
    string swap(string& s , int left , int right){
        int temp = s.at(left);
        s.at(left) = s.at(right);
        s.at(right) = temp;
        
        return s;
    }
    
    bool isVowel(string& s , int index){
        if(s.at(index) == 'a' || s.at(index) == 'e' || s.at(index) == 'i' || s.at(index) == 'o' || s.at(index) == 'u' || s.at(index) == 'A' || s.at(index) == 'E' || s.at(index) == 'I' || s.at(index) == 'O' || s.at(index) == 'U'){
            return true;
        }
        return false;
    }
    string reverseVowels(string& s) {
       int left = 0;
        int right = s.size()-1;
        while(left<right){
           
            while(left<right && isVowel(s, left) == false) left++;
            
            while(left < right && isVowel(s ,right) == false) right--;
            
            swap(s ,left , right);
            
            right--;
            left++;
        }
        return s;
    }
};