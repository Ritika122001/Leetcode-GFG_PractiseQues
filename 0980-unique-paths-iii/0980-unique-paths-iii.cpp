class Solution {
public:
    
    vector<int> dx = {-1, 1, 0, 0};
    int res=0;
    vector<int> dy = {0, 0, -1, 1};
    void solve(vector<vector<int>>& grid , int n, int m, int i, int j, int cnt, int total)
    {
        
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==-1)
        {
            return;
        }
        
        if(grid[i][j]==2)
        {
            if(cnt == total)
                res++;
            return;
        }
        
        grid[i][j] = -1;
        for (int k = 0; k < 4; k++)
        {
            int x = i + dx[k];
            int y = j + dy[k];
            solve(grid,n,m,x, y,cnt+1, total);
        }

        
        grid[i][j] = 0;
     
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        int total = 0;
        int start_x=0;
        int start_y=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                    
                {
                    total++;
                }
                
                 if(grid[i][j]==1)
                {
                     {
                         start_x = i;
                         start_y = j;
                     }
                
                
            }
        }
            

        
    }
        total+=1;
        
                
       
solve(grid,n,m,start_x,start_y,0,total);
            return res;
        

    }
};