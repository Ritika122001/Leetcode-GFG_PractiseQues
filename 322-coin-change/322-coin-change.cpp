class Solution {
public:
    
    int solve(vector<int>&coins , int amount , int n, vector<vector<int>>&memo)
    {
        
        
        if(n==0)
        {
            
            if( (amount % coins[0] ) ==0)
            {
                return amount/coins[0];
            
            }
            
            else
                
                return 1e9;
           
            
            
            
            
        }
        
        
        if(memo[n][amount]!=-1)
        {
            return memo[n][amount];
        }
        
      
        
        int skip = 0 + solve(coins,amount,n-1,memo);
        
        int pick  = INT_MAX;
        
        if(coins[n]<=amount)
        {
            pick =  1 + solve(coins,amount-coins[n],n,memo);
        }
        
        
        return memo[n][amount] = min(pick,skip);
        
        
   
    }
    
    
    
    
    
    int coinChange(vector<int>& coins, int amount) {
        
        
      int n = coins.size();
        vector<vector<int>>memo(n, vector<int>(amount+1,-1));
      int ans =  solve(coins,amount,n-1,memo);
        
        if(ans>=1e9)
        {
            return -1;
        }
        
        return ans;
        
        
        
    }
};