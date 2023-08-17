class Solution {
public:
    
      bool check(int i , int j,vector<vector<int>>&mat )
    {
          int n = mat.size();
        int m = mat[0].size();
        if(i<0 || i>=n || j<0 || j>=m)
        {
            return false;
        }
        
        return true;
    }
    
    
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>>visit(n, vector<int>(m,-1));
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    q.push({i,j});
                    visit[i][j]=0;
                }
            }
        }
        
        while(!q.empty())
        {
            
            int size = q.size();
            for(int i=0;i<size;i++)
            {
        
                int x = q.front().first;
                int y =q.front().second;
                q.pop();
                
                if(check(x+1,y,mat) && visit[x+1][y]==-1)
                {
                    
                    q.push({x+1,y});
                    visit[x+1][y] = visit[x][y] + 1;
                }
                 if(check(x,y+1,mat) and visit[x][y+1]==-1){
                    q.push({x,y+1});
                    visit[x][y+1] = visit[x][y]+1;
                }
                
                if(check(x-1,y,mat) and visit[x-1][y]==-1){
                    q.push({x-1,y});
                    visit[x-1][y] = visit[x][y]+1;
                }
                
                if(check(x,y-1,mat) and visit[x][y-1]==-1){
                    q.push({x,y-1});
                    visit[x][y-1] = visit[x][y]+1;
                }
                
            }
        
        }
        
        return visit;
        
            
    }
};