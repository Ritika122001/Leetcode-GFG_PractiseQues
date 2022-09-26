class Solution {
public:
    
    bool solve(vector<vector<int>>adj , vector<bool>&vis, int  x1, int x2)
    {
        

        vis[x1]=true;
        
        if(x1==x2)
        {
            return true;
        }
        
        
        for(auto c : adj[x1])
        {
            if(!vis[c])
            {
                if(solve(adj,vis,c,x2)) return true;
            }
        }
        
        return false;

        
    }
    
    bool equationsPossible(vector<string>& equations) {
        
  vector <vector <int>> adj(26);
        
        for(auto c : equations)
        {
            if(c[1]== '=')
            {
                 adj[c[0]-'a'].push_back(c[3]-'a');
                 adj[c[3]-'a'].push_back(c[0]-'a');
            }
            
        }
        
     
        for(auto c : equations)
        {
              vector<bool>vis(26, false);
            
            if(c[1]=='!' and solve(adj,vis,c[0]-'a',c[3]-'a'))
            {
              return false;
            }
            
            
        }
        
        return true;
        
    }
};