class Solution {
public:
    
    int solve(int i, int j, vector<vector<int>>& grid,int m, int n, vector<vector<int>>&memo)
    {
          if(i>=m or j >=n) return 100000;
       
          if(i==m-1 and j==n-1) return grid[i][j];
        
      if(memo[i][j]!=-1)
      {
          return memo[i][j];
      }
        
      int left = solve(i+1,j,grid,m,n,memo)+ grid[i][j];
        int right = solve(i,j+1,grid,m,n,memo)+ grid[i][j]; 
        return memo[i][j]  = min(left,right);
        
        
        
    }
    
    
    
    int minPathSum(vector<vector<int>>& grid)
    {
         int m = grid.size();
        int n = grid[0].size();
        
         vector<vector<int>> memo(m, vector<int>(n, -1));
        
         int ans= solve(0,0,grid,m,n,memo);    
        return ans;
        
        
    }
};