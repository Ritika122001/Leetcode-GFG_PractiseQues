class Solution {
public:
  
  
  void dfs(vector<vector<bool>>&visit, vector<vector<int>>&h ,int i , int j)
  {
    
     int m = h.size();
      int n = h[0].size();
    
    if(visit[i][j]==true)
    {
      return;
    }
    
    visit[i][j]=true;
    
    if(i+1<m and h[i+1][j] >=h[i][j])
    {
      dfs(visit,h, i+1,j);
    }
    
    if(i-1 >=0 and h[i-1][j] >=h[i][j])
    {
      dfs(visit, h,i-1,j);
    }
    if(j+1<n and h[i][j+1] >=h[i][j])
    {
      dfs(visit,h, i,j+1);
    }
    
    if(j-1>=0 and h[i][j-1] >=h[i][j])
    {
      dfs(visit,h, i,j-1);
    }
    
    
    
    
    
    
    
  }
  
     vector<vector<int>> pacificAtlantic(vector<vector<int>>& h) {
        
      vector<vector<int>> ans;
       // vector<vector<int>>res;
      int m = h.size();
      int n = h[0].size();
     
      vector<vector<bool>> pacific(m, vector<bool>(n));
      vector<vector<bool>> atlantic(m, vector<bool>(n));
      
      
       for(int i=0;i<m;i++)
      {
        dfs(pacific,h,i,0);
        dfs(atlantic,h,i,n-1);
      }      
      
      for(int i=0;i<n;i++)
      {
        dfs(pacific,h,0,i);
        dfs(atlantic,h,m-1,i);
        
      }
       
       
      for(int i=0;i<m;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(pacific[i][j] and atlantic[i][j])
          {
            ans.push_back({i,j});
          }
        }
      }
      
      
      
     
      
       return ans;
      
    }
};