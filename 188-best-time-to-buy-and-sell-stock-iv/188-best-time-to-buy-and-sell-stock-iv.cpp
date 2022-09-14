class Solution {
public:
    
    int dp[1001][101][2];
    
    int solve(int k,vector<int>& prices,int buy,int pos){
        if(pos==prices.size() || k==0)return 0;
        if(dp[pos][k][buy]!=-1)return dp[pos][k][buy];
        if(buy){
            
           return dp[pos][k][buy]=max(solve(k,prices,1,pos+1),solve(k,prices,0,pos+1)-prices[pos]);
            
        }
        return dp[pos][k][buy]=max(solve(k,prices,0,pos+1),solve(k-1,prices,1,pos+1)+prices[pos]); 
    }
    
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return solve(k,prices,1,0);
    }
    
};