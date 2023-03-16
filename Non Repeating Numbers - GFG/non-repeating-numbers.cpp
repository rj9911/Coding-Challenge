//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // 1 -> SOrting 2 -> Map 3 -> Bit Manipulation
          vector<int> ans;
		    //{1, 2,3, 1, 1,4 }  
		    
		    int XOR = 0,n=nums.size();
		    for(int i=0;i<n;i++){
		        XOR ^= nums[i];             // XOR = 3^4 -> 7
		    }
		    
		    int right_bit=XOR & ~(XOR-1);   // 7 -> 111 , Right_bit = 1
		    int x=0,y=0;
		    for(int i=0;i<n;i++){
		        if(right_bit & nums[i]) x ^= nums[i];      // x=3
		        else y ^= nums[i];                   // y=4
		    }
		    
		    ans.push_back(x);              // 3
		    ans.push_back(y);              // 3 , 4
		    
		    sort(ans.begin(), ans.end());
            return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends