class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        // We need to return the maximum value while iterate over the digits.
        for(auto x:n){
           // ascii value of 0-9 => 48 to 57
        int curr = x - 48; // digit => 3 => asciivalue of 3 is 51, 51-48 = 3 =curr
        ans = max(ans ,curr);
        }
        return ans;
    }
};