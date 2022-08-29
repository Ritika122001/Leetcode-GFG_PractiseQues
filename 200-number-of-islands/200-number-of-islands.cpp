class Solution {
public:
    
    void dfs(vector<vector<char>>&grid , int i , int j, vector<vector<int>>&visited)
    {
        
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || visited[i][j]==1 || grid[i][j]=='0')
        {
            return;
        }
        
        visited[i][j]=1;
        
      
            dfs(grid,i+1,j,visited);

             dfs(grid,i-1,j,visited);
      
              dfs(grid,i,j+1,visited);
  
            dfs(grid,i,j-1,visited);
        
       }
       
 
    int numIslands(vector<vector<char>>& grid) {
        
        
        int cnt=0;
        vector<vector<int>>visited(grid.size() , vector<int>(grid[0].size() ,0));
        
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] =='1' and visited[i][j]==0)
                {
                     dfs(grid,i,j,visited);
         
                    cnt++;
                }
             
            }
        }
            
        
        return cnt;
        
    }
};