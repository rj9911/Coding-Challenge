//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    // 1 ->  0001
    // 2 ->  0010
    // 3 ->  0011
    // 4 ->  0100
    // 5 ->  0101
    // 6 ->  0110
    // 7 ->  0111
    // 8 ->  1000
    // 9 ->  1001
    // 10 -> 1010
    // 11->  1011
    
    
    typedef long long int ll;
    int largestPowerof2inrange(int n){
        int x=0;                   // n = 11
        
        while((1 << x) <= n){     // 2^0 -> 2^1 -> 2^2 -> 2^3 -> 2^4 less than or equal to 11
            x++;                  // 1 << x  -> 2^x
        }                         
        
        return x-1;               // 4-1 => 3
    }
    
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)          // n=11
    {
        if(n==0) return 0; // in n=0 total set bits are 0
        int x = largestPowerof2inrange(n);      // x = 3
        int btill2x = x*(1 << (x-1));          // 3 * (2 ^ 2)     -> 8
        int msb2xton = n - (1 << x) + 1;    // 11 - (2^3) + 1 => 4 (MSB -> 4 1's bit) -> 4
        int rest = n - (1 << x);             // 11 - 2^x  => 3 (remain 3 bits) -> 4
        int ans = btill2x + msb2xton + countSetBits(rest);  // make recursion of remain 3 bits and add another set bits
        // 8 + 4 + 4 -> 16 bits
        return ans;
    } 
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends