class Solution {
public:
    
    // bool ans;
    int  memo[102][102][205];
    // bool solve(int open, int close,vector<vector<char>>& grid,int i, int j)
            bool solve(int i, int j,vector<vector<char>>& grid,int bal)
    {
        
        if(i==grid.size() || j==grid[0].size())
        {
            return false;
        }
     
        if(grid[i][j]=='(')
        {
            bal++;
            
            // solve(open+1,close,grid,i+1,j) || solve(open+1,close,grid,i,j+1);
            
        }
        
        else if(grid[i][j]==')'){
            
            
            bal--;
            // solve(open,close+1,grid,i,j+1) || solve(open,close+1,grid,i+1,j);
            
        }
        
        
        
        if(bal<0)
        {
            return false;
        }
        
    
        if(memo[i][j][bal]!=-1)
        {
            return memo[i][j][bal];
        }
        
        
           if(i==grid.size()-1 and j==grid[0].size()-1 and bal==0)
        {
            return true;
        }//if condition fulfilled 
        
           int r = solve(i,j+1,grid,bal);
        int d = solve(i+1,j,grid,bal);
        
     return memo[i][j][bal] = r || d; //want to check single answer therfore || 
        
        
        
    }
    
    
    
    
    bool hasValidPath(vector<vector<char>>& grid) {
        
        
        // ans=0;
          memset(memo, -1, sizeof(memo));
       // return  solve(0,0,grid,0,0);
        return solve(0,0,grid,0);
        // return ans;
    }
    
};