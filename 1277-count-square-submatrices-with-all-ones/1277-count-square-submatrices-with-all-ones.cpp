class Solution {
public:
    //same like maximal sqaure  //we are taking maximum of all sizes
    
    //here we are adding all the combination of all sizes
    
    
    int solve(vector<vector<int>>&matrix, int i, int j, int n, int m ,vector<vector<int>>&memo)
    {
        
        
          if(i<0 || j<0 || i>=n || j>=m || matrix[i][j]==0)
        {
            return 0;
        }
        
        if(memo[i][j]!=-1)  return memo[i][j];
        
        return memo[i][j] = 1 + min(solve(matrix, i+1,j,n,m,memo) , min(solve(matrix,i+1,j+1,n,m,memo), solve(matrix,i,j+1,n,m,memo)) );
        
        
        
    }
    
    
    
    
    
    
    int countSquares(vector<vector<int>>& matrix) {
        
        int res=0;
        
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> memo( n, vector<int>(m, -1));
        
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1)
                {
                     res+=  solve(matrix,i,j,n,m,memo);
                    // res = max( solve(matrix,i,j,n,m,memo), res );
                }
            }
        
        
        }
        
        return res;
        
    }
};