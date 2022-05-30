// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:


  int dp[100][100];
    
     int dfs(int i, int j, vector<vector<int>>&grid, int prev)
     {
         
         if(i<0 || i >=grid.size() || j<0 || j >=grid[0].size() || grid[i][j]<=prev)
         {
             return 0;
         }
         
        
         if(dp[i][j]!=-1)
         {
             return dp[i][j];
         }
       
         
         return dp[i][j]  = 1 + max({ dfs(i + 1, j, grid, grid[i][j]),
                                    dfs(i - 1, j,grid, grid[i][j]),
                                    dfs(i, j + 1, grid,grid[i][j]),
                                    dfs(i, j - 1, grid, grid[i][j]) });
         
         
         
         
     }
     
     
    int longestIncreasingPath(vector<vector<int>>& grid) {
        // Code here
        
         memset(dp,-1,sizeof(dp));
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

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends