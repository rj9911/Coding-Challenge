//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){    // a=01010 , b=10100
       int x = a^b,cnt=0;    // x=01010 ^ 10100 -> 11110
       while(x>0){          // ans = total set bits in the number
           if(x&1 == 1)     // 11110 -> 1111 -> 111 -> 11 -> 1 -> 0
              cnt++;        //   0 ->     1 ->   2 ->   3 -> 4 
           x >>= 1;         
       }
       return cnt;        // 4
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

        Solution ob;
		cout<<ob.countBitsFlip(a, b)<<endl;
	}
	return 0;
}
// } Driver Code Ends