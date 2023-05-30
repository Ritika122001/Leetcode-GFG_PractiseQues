class Solution {
public:
    
//     int func(int i, int j, vector<int>&nums1, vector<int>&nums2, vector<vector<int>>&memo)
//     {
        
//         if(i==0 || j==0) return 0;
        
//         if(memo[i][j]!=-1)
//         {
//             return memo[i][j];
//         }
        
//         if(nums1[i-1] == nums2[j-1])
//         {
//              memo[i][j] = 1 + func(i-1,j-1,nums1,nums2,memo);
//         }
//         else
//         {
//              memo[i][j]=  max(func(i-1,j,nums1,nums2,memo) , func(i,j-1,nums1,nums2,memo));
//         }
    
//         return memo[i][j];
        
    // }
    
    int maxUncrossedLines(vector<int>&nums1, vector<int>& nums2) 
    {
        
        int n =nums1.size();
        int m = nums2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        // return func(nums1.size(),nums2.size(),nums1, nums2,memo);
        
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=m-1;j>=0;j--)
            {
                
             if(nums1[i] == nums2[j])
        {
             dp[i][j] = 1 + dp[i+1][j+1];
        }
        else
        {
             dp[i][j]=  max(dp[i+1][j] , dp[i][j+1]);
        }
                
            }
        }
        
        return dp[0][0];
        
        
    }
};