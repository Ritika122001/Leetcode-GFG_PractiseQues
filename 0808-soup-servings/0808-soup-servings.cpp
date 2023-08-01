class Solution {
public:
    vector<int> A={100,75,50,25}, B={0,25,50,75};

    double solve(int a, int b, vector<vector<double>> &dp){
        if(a==0 and b==0) return 0.5;
        if(a==0)  return 1;
        if(b==0) return 0; 
        
        if(dp[a][b] != -1) return dp[a][b];
        
        double ans=0;
        for(int k=0;k<4;k++){
            ans+= 0.25*solve(max(0,a-A[k]), max(0,b-B[k]), dp);
        }
        
        return dp[a][b]=ans;
    }
    
    double soupServings(int n) {
        if(n>=4800) return 1;
        vector<vector<double>> dp(n+1,vector<double>(n+1,-1));
        return solve(n,n,dp);
    }
};