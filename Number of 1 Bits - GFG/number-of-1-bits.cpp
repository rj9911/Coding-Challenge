//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int setBits(int N) {
        int cnt=0;                 // n=6 -> 110
        while(N>0){               //0 -> 1 -> 2
            if(N&1 == 1) cnt++;   // 110 -> 11 -> 1 -> 0 
            N = N >> 1;
        }
        return cnt;           // 2
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        Solution ob;
        int cnt = ob.setBits(N);
        cout << cnt << endl;
    }
    return 0;
}

// } Driver Code Ends