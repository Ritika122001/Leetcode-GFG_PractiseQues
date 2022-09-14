class Solution {
public:
    
    // int dp[1001][101][2];
    
//     int solve(int k,vector<int>& prices,int buy,int pos){
//         if(pos==prices.size() || k==0)return 0;
//         if(dp[pos][k][buy]!=-1)return dp[pos][k][buy];
//         if(buy){
            
//            return dp[pos][k][buy]=max(solve(k,prices,1,pos+1),solve(k,prices,0,pos+1)-prices[pos]);
            
//         }
//         return dp[pos][k][buy]=max(solve(k,prices,0,pos+1),solve(k-1,prices,1,pos+1)+prices[pos]); 
//     }
    
    int maxProfit(int k, vector<int>& prices) {
        // memset(dp,-1,sizeof(dp));
        // return solve(k,prices,1,0);
        
         vector<vector<vector<int>>>dp(prices.size()+1 , vector<vector<int>>(2, vector<int>(k+1, 0)));

        
        for(int i=prices.size()-1;i>=0;i--)
        {
            for(int buy=0;buy<=1;buy++)
            {
                for(int cap=1;cap<=k;cap++)
                {
                        
                    if(buy==1)
                    {
                        dp[i][buy][cap] = max( (-prices[i] + dp[i+1][0][cap]) , ( 0 + dp[i+1][1][cap]) );
                    }
                    else
                    {
                        dp[i][buy][cap] = max(prices[i] + dp[i+1][1][cap-1] , ( 0 + dp[i+1][0][cap]) );
                    }
                    
                }
            }
        }
        
        
        return dp[0][1][k];
    }
    
};