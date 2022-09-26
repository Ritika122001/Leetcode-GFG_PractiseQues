class Solution {
public:
    
    //path checking 
    
//     if not equal aur saath me true yes it is not equal --> false no path 
    
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
        
//         return false;
        
//          queue<int>q;;
//            q.push(x1);
    
         
//           while(!q.empty())
//           {
//             int node =  q.front();
//             q.pop();
            
//             for(auto it: adj[node])
//             {
              
//               if(it==x2)
//               {
//                 return true;
//               }
              
//               if(!vis[it])
//               {
//                 q.push(it);
//                 vis[it]=1;
                
//               }
        
//             }
//           }
          
      
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