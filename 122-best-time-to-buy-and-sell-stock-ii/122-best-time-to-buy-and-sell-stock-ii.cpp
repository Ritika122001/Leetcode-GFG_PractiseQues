class Solution {
public:
   int profit=0;
    
//     int solve(int i , int buy , vector<int>&prices)
//     {
        
//         if(i==prices.size())
//         {
//             return 0;
//         }
        
//         if(buy)
//         {
//             return  max(-prices[i] + solve(i+1,0,prices) , 0  + solve(i+1,1,prices));
//         }
        
//         else{
            
//             return max(prices[i]  +solve(i+1,1,prices ) ,  0+ solve(i+1,0,prices));
//         }
        
//         return profit;
        
        
//     }
    
    int maxProfit(vector<int>& prices) {
        
        
        vector<vector<int>>dp(prices.size()+1 , vector<int>(2,0));
        dp[prices.size()][0] = dp[prices.size()][1] = 0;
        for(int i=prices.size()-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
              
                if(buy)
                {
                   profit =   max(-prices[i] + dp[i+1][0] , 0  + dp[i+1][1]);
                }
                
                else{
                    
                    profit = max(prices[i]  + dp[i+1][1] ,  0+ dp[i+1][0]);
                }
                
                dp[i][buy] = profit;
            }
            
            
        }
        
        return dp[0][1];
        
        // return solve(0,1,prices);
        
    }
};