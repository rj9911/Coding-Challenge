//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cnt_set(int n){
        int res=0;
        while(n>0){
            if(n&1 == 1) res++;
            n >>= 1;
        }
        return res;
    }
    int findPosition(int n) {
        int cnt=cnt_set(n);
        int ans=-1,indx=1;
        
        if(cnt==1)
           while(n>0){
               if(n%2 == 1){
                   ans=indx; break;
               }
               n/=2;
               indx++;
           }
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends