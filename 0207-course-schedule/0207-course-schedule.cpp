class Solution {
  
  

  
  	bool dfs(int node,  vector<int>&vis,  vector<vector<int>>&adj, vector<int>&dfsv )
	
	{
	    
	    
	    vis[node]=1;
      dfsv[node]=1;
	    
	    for(auto it:adj[node])
	    {
	        
	        if(!vis[it])
	        {
	           
	            if(dfs(it,vis,adj,dfsv)) return true;
	        }
	        
        else if(dfsv[it])   return true;
       
             
	    }
       dfsv[node]=0;
      return false;

	    
	    
	    
	}
  
  
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
      
     vector<vector<int>>adj(numCourses);
        for(auto edge : prerequisites)
            adj[edge[1]].push_back(edge[0]);
      
      
      int V=numCourses;
      vector<int>dfsv(numCourses,0);
      vector<int>vis(V,0);
	    
	    for(int i=0;i<V;i++)
	    {
	        if(vis[i]==0 and dfs(i,vis,adj,dfsv))  return false;
           
	    }
      
      return true;
	    
      
      
     
    }
  
};