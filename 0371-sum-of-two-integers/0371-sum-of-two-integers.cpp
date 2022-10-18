class Solution {
public:
    int getSum(int a, int b) {
        while(b!=0){
            unsigned int res= a&b;
            a=a^b;
            b=res<<1;
        }
        return a;
    }
};