//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
public:

    int t[501][501]; // For memoization


    int solve(vector<int>&arr, int i , int j)
    {
                int n =arr.size();

        	if(i > j)
			return 0;
			
		    if(i == j)
	{                                   // Only one element exists
            int temp = arr[i];
            if(i - 1 >= 0)  
                temp *= arr[i - 1];
            if(i + 1 < n)
                temp *= arr[i + 1];
            return temp;
        }

        if(t[i][j] != -1)  // Check if the solution is already stored for this subproblem
			return t[i][j];

        
        
        
        int ans=0;
        for(int k=i;k<=j;k++)
        {
            int temp = arr[k];
            if(j + 1 < n)  temp*= arr[j+1];
            if(i-1>=0) temp*= arr[i-1];
            temp+=solve(arr,i,k-1) + solve(arr,k+1,j);
            ans = max(ans,temp);
        }
        
        return t[i][j] = ans;
      
      
    }

    int maxCoins(int N, vector<int> &a) {
        // code here
                memset(t, -1, sizeof(t));

        
        vector<int>arr ={1};
        for(int x: a) 
			arr.push_back(x);
        arr.push_back(1);
        
        int n = arr.size();
        return solve(arr,1,n-2);

        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        vector<int> arr(N);
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution obj;
        cout << obj.maxCoins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends