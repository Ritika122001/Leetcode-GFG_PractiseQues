class Solution {
public:
    
    
        int dp[5001][2];
    
    int solve(vector<int>& prices,int buy,int pos){
        if(pos>=prices.size())return 0;
        if(dp[pos][buy]!=-1)return dp[pos][buy];
        if(buy==1){
            
           return dp[pos][buy]=max(solve(prices,1,pos+1),solve(prices,0,pos+1)-prices[pos]);
            
        }
        return dp[pos][buy]=max(solve(prices,0,pos+1),solve(prices,1,pos+2)+prices[pos]); 
    }
    
    int maxProfit(vector<int>& prices) {
        
          memset(dp,-1,sizeof(dp));
        return solve(prices,1,0);
        
    }
};