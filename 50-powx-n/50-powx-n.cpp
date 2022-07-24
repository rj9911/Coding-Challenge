class Solution {
public:
    double myPow_help(double x, long n) {
      if(n==0) return 1.0;
      if(n==1) return x;
      if(n<0) return myPow_help(1/x,-n);
     /* double result = 1;
      for(int i = 0; i< n;i++){
          result *= x;
      }
        return result;  */
      double result = myPow_help(x*x, n/2);
      if(n%2) result *= x;
      return result;
    }
    double myPow(double x, int n){
      return myPow_help(x, n);
    }
};