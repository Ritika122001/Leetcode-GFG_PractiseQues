class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        
       int dx[8]={-1,-1,-1,0,0,1,1,1};
        int dy[8]={-1,0,1,-1,1,-1,0,1};
        int n = grid.size() - 1;
        int m = grid[0].size() - 1;
        
         if(grid[0][0] || grid[n][m])
            return -1;
        
        
        queue<vector<int>>q;
        q.push({0,0,1});
        grid[0][0] = -1; //visited marked
        
        while(!q.empty())

        {
            
            
            int size = q.size();
            
            for(int i=0;i<size;i++)
            {
             
                vector<int>temp=q.front();
                
                int nx = temp[0];
                int ny = temp[1];
                int cost =temp[2];
                 q.pop();
                
                if(nx==n and ny==m)
                {
                    
                    return cost;
                    
                }
                
                for(int i=0;i<8;i++)
                {
                    int x = temp[0] + dx[i];
                    int y = temp[1] + dy[i];
                    
                  if( 0 <= x && x <= n && 0 <= y && y <= m && grid[x][y] == 0){
                    grid[x][y] = -1;  // mark visted
                    q.push({x, y, temp[2] + 1});
                }
                    
                    
                }
                
            
            
        }
        }
            
            return -1;
        
        
     
        
        
        
    }
};