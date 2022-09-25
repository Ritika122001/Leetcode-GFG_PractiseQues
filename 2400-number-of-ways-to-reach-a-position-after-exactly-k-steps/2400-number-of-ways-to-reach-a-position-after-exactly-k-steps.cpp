class Solution {
public:
    
    long long int mod =1e9+7;
    
    int solve(int start , int end, int k, vector<vector<int>>&memo)
    {
        if(k==0)
        {
            if(start==end)
            {
                return 1;
            }
            else{
                return 0;
            }
            
        }
        
        if(memo[start+1000][k]!=-1)
        {
            return memo[start+1000][k];
        }

        
        return memo[start+1000][k] = (solve(start-1,end,k-1,memo)%mod + solve(start+1,end,k-1,memo)%mod)%mod;
        
        
        
        
    }
    
    
    int numberOfWays(int start, int end, int k) {
        
        vector<vector<int>>memo(3000, vector<int>(k+1,-1));
        return solve(start,end,k,memo)%mod;
        
    }
};