class Solution {
public:
    
    void solve(int i, vector<vector<int>>&adj , vector<int>&vis)
    {
        
        vis[i]=true;
        
        for(auto c : adj[i])
        {
            
            if(!vis[c])
            {
                solve(c,adj,vis);
            }            
            
        }
    
    }
    
    
    
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
int n = isConnected.size();
        vector<vector<int>>adj(n);
          vector<int> vis(n,0);
        
       for(int i=0;i<isConnected.size();i++)
       {
           for(int j=0;j<isConnected[0].size();j++)
           {
               
               if(i!=j and isConnected[i][j]==1)
               {
                   adj[i].push_back(j);
                   adj[j].push_back(i);
                   
               }
               
           }
       }
        
        int ans=0;
        
        for(int i=0;i<isConnected.size();i++)
        {
            if(!vis[i])
            {
                solve(i,adj,vis);
                ans++;
                
            }
            
        }
        
        
        return ans;
        
        
        
    }
};