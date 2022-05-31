// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
public:



    int solve(vector<int>&nums , int len, int rem , int i , vector<vector<int>>&dp)
    {
        
        
        if(i==nums.size()-1)
        {
            
            if(nums[i] < rem)
            {
                return 0;
            }
            
            return rem*rem;
        }
        
        if(dp[i][rem]!=-1)
        {
            return dp[i][rem];
        }
        
        
        if(nums[i]<rem)
        {
    
    int take =  solve(nums,len, rem == len ? rem-nums[i] : rem-nums[i]-1 , i+1,dp );
    int notTake = (rem*rem) +  solve(nums,len,len-nums[i],i+1 ,dp) ; 
    return dp[i][rem] = min( take, notTake);
             
        }
        
        else
        
           return dp[i][rem] = (rem*rem) + solve(nums,len,len-nums[i],i+1 , dp); 
        
        
    }


   
    int solveWordWrap(vector<int>nums, int k) 
    { 
        vector<vector<int>> dp(nums.size(),vector<int>(k+1,-1));

        return solve(nums, k , k , 0 ,dp );
    } 
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
        cin >> n;
        vector<int>nums(n);
        for (int i = 0; i < n; i++)cin >> nums[i];
        cin >> k;
        Solution obj;
        cout << obj.solveWordWrap(nums, k) << endl;
	}
	return 0;
}  // } Driver Code Ends