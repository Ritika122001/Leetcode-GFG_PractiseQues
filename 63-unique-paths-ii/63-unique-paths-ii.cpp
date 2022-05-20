class Solution {
public:
  
//      int solve(int i,int j,int m,int n, vector<vector<int>>&a)
//   {
    
//        if(i==m-1 and j==n-1)
//        {
//          return 1;
         
//        }
       
//       if(i>=m or j>=n or a[i][j]==1 )
//       {
//         return 0;
//       }
    
    
//     return solve(i+1,j,m,n,a)+solve(i,j+1,m,n,a) ;
    
    
//   }
    
  
   int solve(int i,int j,int m,int n, vector<vector<int>>&dp, vector<vector<int>>& a)
  {
    
       if(i==m-1 and j==n-1 and a[i][j]==0) //space 
       {
         return 1;
         
       }
       
      if(i>=m or j>=n or a[i][j]==1) //obstacle
      {
        return 0;
      }
    
    
    if(dp[i][j]!=-1)  //visited
    {
      return dp[i][j];
      
    }
    
     return dp[i][j] = solve(i+1,j,m,n,dp,a)+solve(i,j+1,m,n,dp,a);
    
    
  }
    
  
    int uniquePathsWithObstacles(vector<vector<int>>& a) {
      

      int m = a.size();
      int n = a[0].size();
      vector<vector<int>>dp(m,vector<int>(n,-1));
      
     return solve(0,0,m,n,dp,a);
      
      
        
    }
};