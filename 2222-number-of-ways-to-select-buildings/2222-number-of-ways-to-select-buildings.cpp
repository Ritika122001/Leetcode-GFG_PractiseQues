class Solution {
public:
    
    long long dp[100003][4][3];
    
    long long solve(int i, string &s, int k, char prev)
    {
        
        
        if(k==0)
        {
            return 1;
        }
        
        if(i==s.length())
        {
            return 0;
        }
        
        if(dp[i][k][prev-'0']!= -1)

        {
            return dp[i][k][prev-'0'];
        }
        
        long long pick=0;
         
        if(s[i]!=prev)   pick = solve(i+1,s,k-1,s[i]);
       
        long long  skip = solve(i+1,s,k,prev);
       
        
      
        return dp[i][k][prev-'0'] = skip+pick;
        
        
        
        
        
    }
    
    
    
    long long numberOfWays(string s) {
     
       
         memset(dp, -1, sizeof(dp));
         return solve(0,s,3,'2');
        
        
    }
};