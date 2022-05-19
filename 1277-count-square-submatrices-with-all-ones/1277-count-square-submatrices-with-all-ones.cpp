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
        vector<vector<int>> memo(n,vector<int>(m,0));
    
        for(int i=0;i<m;i++)
        {
            memo[0][i] = matrix[0][i];
            
        }
        
        for(int i=0;i<n;i++)
        {
            memo[i][0] = matrix[i][0];
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                
                if(matrix[i][j]==0)
                {
                    memo[i][j]=0;
                }
             
                else{
                     memo[i][j] =1 +  min(memo[i-1][j] , min( memo[i][j-1] , memo[i-1][j-1]));
                    
                }
                
               
                   
                
                
                // if(matrix[i][j]==1)
                // {
                //      res+=  solve(matrix,i,j,n,m,memo);
                //     // res = max( solve(matrix,i,j,n,m,memo), res );
                // }
            }
        
        
        }
        
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            res+= memo[i][j];
        }
    }
        
        
        return res;
    }
};