class Solution {
  
  
public:
  
   int solve(vector<int>&prices, int i , int buy  , int cap, vector<vector<vector<int>>>&memo)
   {
     
     int profit=0;
     
     if(i==prices.size() || cap==0)
     {
       return 0;
     }
     
     if(memo[i][buy][cap]!=-1)
     {
       return memo[i][buy][cap];
     }
     
     
     if(buy)
     {
       
       
        memo[i][buy][cap]  = max( (-prices[i] + solve(prices,i+1,0,cap,memo)) , (0 +  solve(prices,i+1,1,cap,memo) ));
       
     } 
     
     else{
       
       
      memo[i][buy][cap] = max((prices[i] + solve(prices,i+1,1,cap-1,memo)) , (0+solve(prices,i+1,0,cap,memo)));
     }
     
     return memo[i][buy][cap];
     
     
     
     
     
     
     
     
     
     
   }
  
    int maxProfit(vector<int>& prices) {
      
      
//       int cnt=2;
//       int profit = INT_MIN;
//       int i=1;
//       while(cnt>0 and i<prices.size())
//       {

//            if( prices[i]> prices[i-1])
//            {
//              int ans = prices[i]-prices[i-1];
//              profit+= max(profit, ans);
//              cout<<profit<<" "; 
//              cnt--;
//              i++;
//            }  
//         i++;
        
        
//       }
      
//       return profit;
      vector<vector<vector<int>>> memo(prices.size(),vector<vector<int>>(2,vector<int> (3,-1)));
      
      return solve(prices,0,1,2,memo);
        
    }
};