class Solution {
public:
    
    int solve(vector<int>&rods, int i, int diff, vector<vector<int>>&dp)
    {
        
        if(i>=rods.size())
        {
            if(diff==0)
            {
                return 0;
            }
            
            return INT_MIN;
        }
        
        if(dp[i][diff+5000]!=-1)
        {
            return dp[i][diff+5000];
        }
        
        
        return dp[i][diff+5000] = max( max( (rods[i] + solve(rods,i+1,diff+rods[i],dp)) , (rods[i] + solve(rods,i+1,diff-rods[i],dp))), solve(rods,i+1,diff,dp));
        
        
        
    }
    
    int tallestBillboard(vector<int>& rods) {
        
        vector<vector<int>>dp(rods.size(),vector<int>(10001,-1));
        return solve(rods,0,0,dp)/2;
        
    }
};