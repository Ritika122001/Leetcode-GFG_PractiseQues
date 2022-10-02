class Solution {
    
    long long mod = 1e9 + 7;
    long long ans=0;
public:
    int solve( int d, int k , int target , vector<vector<int>>&memo)
    {   
       if(target<0)
            return 0;
        if(d==0)
        {
            if(target==0)
               { return 1;
               }
            return 0; 
        }
        
      long long ans=0;
        
        if(memo[d][target]!=-1)
        {
            return memo[d][target];
        }
        
        for(int i=1;i<=k;i++)
        {
         
             ans = (ans+solve(d-1,k,target-i,memo)%mod)%mod;

            
        }
        
        return memo[d][target] = ans%mod;
        
      
    }
    
    int numRollsToTarget(int n, int k, int target) {
        vector<vector<int>>memo(n+1, vector<int>(target+1 , -1));
        return solve(n,k,target,memo);
    }
};