class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        
        
        vector<vector<int>>dp(prices.size()+1 , vector<int>(2,0));
        // dp[prices.size()][0] = dp[prices.size()][1] = 0;
        for(int i=prices.size()-1;i>=0;i--)
        {
            // for(int buy=0;buy<=1;buy++)
            // {
              
                // if(buy)
                // {
                    dp[i][1] =   max(-prices[i] + dp[i+1][0] , 0  + dp[i+1][1]);
                // }
                
                // else{
                    
                     dp[i][0] = max(prices[i]-fee  + dp[i+1][1] ,  0+ dp[i+1][0]);
                // }
                
                
            // }
            
            
        }
        
        return dp[0][1];
        
    }
};