class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        queue<pair<int,int>>q;
        
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
            
            if(grid[i][j]==2)
            {
                q.push({i,j});
            }
        
            
        }
    }
        
        vector<pair<int, int>> dir = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};
int cnt=0;
         
        while(!q.empty())
        {
            
           int size = q.size();
            for(int i=0;i<size;i++)
            {
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                
                
                for(auto it : dir)
          {
            int nx = x + it.first;
            int ny = y + it.second;
            
            if(nx >= 0 && nx < grid.size() && ny >= 0 && ny < grid[0].size()  && grid[nx][ny] == 1)
            {
              
              grid[nx][ny]=2;
              q.push({nx,ny});
              
              
            }
              
          }

                
                
            }
            
            cnt++;
            
        }
        
          for(int i=0;i<grid.size();i++)
    {
        for(int j=0;j<grid[0].size();j++)
        {
           
            if(grid[i][j]==1)
            {
                return -1;
            }
            
        }
              
              
          }
        
        if(cnt>0)
        {
            return --cnt;
        }
        
        
        return cnt;
        
    }
};