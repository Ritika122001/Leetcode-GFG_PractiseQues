class Solution {
public:    
    
      vector<vector<int>> dp;
    // int solve(int i, vector<int>&nums, int prev)
    // {
        
        
        
        
//         if(i==nums.size())
//         {
//             return 0;
//         }
        
        
//         if(dp[prev+1][i]!=-1)
//         {
//             return dp[prev+1][i];
//         }
        
//         int pick=0;
        
       
//         if(prev==-1 || nums[prev] < nums[i])
//         {
            
//             pick = 1 + solve(i+1,nums,i);
            
//         }
        
//          int skip = 0+ solve(i+1,nums,prev);
        
//         return dp[prev+1][i] = max(pick,skip);
        
        
        
        
        
        
    // }
    
    
    
    int lengthOfLIS(vector<int>& nums) {
        
//             vector<vector<int>> dp;
//         int n= nums.size();
//          // dp.resize(n+1, vector<int>(n+1, -1));
        
//        
        
        
//         return solve(0,nums,-1);

        
        int n = nums.size(), ans = INT_MIN;
        vector<int>dp(n, 1);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++)
                if(nums[i] > nums[j]) dp[i] = max(dp[i], 1+dp[j]);
            ans = max(ans, dp[i]);
        }
        
        return ans;

        
        
        
        
    }
};