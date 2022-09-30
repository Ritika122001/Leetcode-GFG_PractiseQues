class Solution {
public:
    
    
    int flag=1;
    
    bool solve(int i, int n, vector<int>&piles , vector<vector<int>>&memo)
    {
        

        if(i>n)
        {
            return 0;
            
        }        
        
        
        if(memo[i][n]!=-1)
        {
            return memo[i][n];
        }
        
        
        int l=INT_MIN;
        int r=INT_MIN;
        if(flag==1)
        {
            flag=0;
              l = max(piles[i] + solve(i+1 , n , piles,memo) ,  piles[n] + solve(i,n-1,piles ,memo) );
        }
        
        else
        {
            flag=1;
            
             r = max( piles[i] + solve(i+1 , n , piles ,memo) ,  piles[n] + solve(i,n-1,piles , memo) );
        }
        
        return memo[i][n] = l > r;
       
        
        
        
        
    }
    
    bool stoneGame(vector<int>& piles) {
        
        
        int n = piles.size();
    vector<vector<int>>memo(n+1, vector<int>(n+1,-1));    
    return solve(0,piles.size()-1,piles ,memo);
        
        
        
    }
};