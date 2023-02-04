//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	
	int solve(int *arr , int n, vector<int>&memo)
	{
	   
	   if(n<=0) return 0;
	   
	   if(memo[n]!=-1) return memo[n]; 
	   //if(n==0) return 1;
	   
	    return memo[n] = max(arr[n-1] + solve(arr,n-2,memo) , solve(arr,n-1,memo));
	    
	   
	}
	
	
	int findMaxSum(int *arr, int n) {
	    
	    vector<int>memo(n+1,-1);
	    return solve(arr,n,memo);
	    
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends