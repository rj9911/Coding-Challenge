class Solution {
public:
  int candy(vector<int>& ratings) {
    /*    int n = a.size();
        int ans = 0;
       vector<int> rv(n,1);
       vector<int> lv(n,1);
      
      for(int i= 1; i< n ; i++){
          if(a[i] > a[i-1]){
              rv[i] += 1;
          }
      }
       for(int i= n-2; i >= 0 ; i--){
          if(a[i] > a[i+1]){
              lv[i] += 1;
          }
      }
      for(int i =0 ; i< n;i++){
         ans += max(lv[i] ,rv[i]); 
      }
      return ans;
      */
               int size = ratings.size();
         if(size<2)
             return size;
         vector<int> lv(size,1);
      vector<int>rv(size,1);
         for(int i=1;i<size;i++){
             if(ratings[i-1]<ratings[i])
                 lv[i] = lv[i-1]+1;
         }
         for(int i=size-2;i>=0;i--){
             if(ratings[i+1]<ratings[i])
                 rv[i] = rv[i+1]+1;
         }
         int sum = 0;
         for(int i=0;i<size;i++){
             sum+=max(lv[i],rv[i]);
         }
         return sum;

    }
};