class Solution {
public:
    
        
    vector<vector<int>> bridges;
    int timer=0;
     vector<int>tin;
          vector<vector<int>> adj;
        vector<int>low;
        vector<int>vis;
    
    
    
    void dfs(int node, int parent=-1)
    {
        
        vis[node]=1;
        tin[node ] = low[node] = ++timer;
        for(auto it : adj[node])
        {
            
            if(!vis[it])
            {
                dfs(it,node);
                low[node] =   min ( low[node] , low[it]);
                
                if(tin[node] < low[it])
                {
                    bridges.push_back({node,it});
                }
            }
                
                else if(it!=parent){
                    

                low[node] = min(low[node] , low[it]);
                      
            }
            
          
  
        
    }
    
    }
    
    
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        
        
        tin.resize(n,0);
        adj.resize(n);vis.resize(n,0);
        low.resize(n,0);
   
        for(vector<int> edge: connections) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        
        
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                dfs(i);
            }
        }
        
        
        
        
        return bridges;
        
        
        
        
        
    }
    
    
};