class Solution {
public:
     int dp[200][200];
    
     int dfs(int i, int j, vector<vector<int>>&grid, int prev)
     {
         
         if(i<0 || i >=grid.size() || j<0 || j >=grid[0].size() || grid[i][j]<=prev)
         {
             return 0;
         }
         
        
         if(dp[i][j])
         {
             return dp[i][j];
         }
       
         
         return dp[i][j]  = 1 + max({ dfs(i + 1, j, grid, grid[i][j]),
                                    dfs(i - 1, j,grid, grid[i][j]),
                                    dfs(i, j + 1, grid,grid[i][j]),
                                    dfs(i, j - 1, grid, grid[i][j]) });
         
         
         
         
     }
  
    int longestIncreasingPath(vector<vector<int>>&grid) {
     
        
                int ans=0;
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j =0;j<grid[0].size();j++)
            {
                    ans = max(ans, dfs(i,j,grid,-1));
               
            }
        }
        
        return ans;
        
    }
};