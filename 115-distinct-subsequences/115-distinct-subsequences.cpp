class Solution {
public:
    
    
    
//     int solve(string &s, string &t, int i , int j , vector<vector<int>>&dp)
//     {
//         if(j<=0)
//         {
//             return 1;
//         }
        
//         if(i<=0)
//         {
//             return 0;
//         }
        
//         if(memo[i][j]!=-1)
//         {
//             return memo[i][j];
//         }
        
        
//         if( s[i-1] == t[j-1] )
//         {
            
//             return memo[i][j] = solve(s,t,i-1,j-1,memo) + solve(s,t,i-1,j,memo);
            
//         }
        
//         else
//             return memo[i][j] =  solve(s,t,i-1,j,memo);
        
        
    
//     }
    
    
    
    int numDistinct(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        
        // vector<vector<int>>memo(n+1, vector<int>(m+1,-1));
        vector<vector<unsigned int>>dp(n+1, vector<unsigned int>(m+1,0));
        
        
        
        
        for(int i=0;i<=n;i++)

        {
            for(int j=0;j<=m;j++)
            {
                if(i==0 and j==0)
                {
                    dp[i][j]=1;
                }
                
                else if(i==0)
                {
                    dp[i][j]=0;
                }
                
                else if(j==0)
                {
                    dp[i][j]=1;
                }
                
                else{
                       
        if( s[i-1] == t[j-1] )
        {
            
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
            
        }
        
        else
        {
             dp[i][j] =  dp[i-1][j];
            
        }
           
                }
                    
            }
        }
        
        
        
        
        
        return dp[n][m];
        // return solve(s,t,s.length(),t.length(),dp);
        
    }
};