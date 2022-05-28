class Solution {
public:
    
    
    int memo[1005][1005];
    
    int solve(string &s, string &t, int i , int j )
    {
        if(j<=0)
        {
            return 1;
        }
        
        if(i<=0)
        {
            return 0;
        }
        
        if(memo[i][j]!=-1)
        {
            return memo[i][j];
        }
        
        
        if( s[i-1] == t[j-1] )
        {
            
            return memo[i][j] = solve(s,t,i-1,j-1) + solve(s,t,i-1,j);
            
        }
        
        else
            return memo[i][j] =  solve(s,t,i-1,j);
        
        
    
    }
    
    
    
    int numDistinct(string s, string t) {
        
        int n = s.length();
        int m = t.length();
        memset(memo, -1, sizeof(memo));
        // vector<vector<int>>memo(n+1, vector<int>(m+1,-1));
        return solve(s,t,s.length(),t.length());
        
    }
};