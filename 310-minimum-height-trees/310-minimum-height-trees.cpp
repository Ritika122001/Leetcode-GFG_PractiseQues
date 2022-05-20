class Solution {
public:
 
    
    void solve(int &i, vector<vector<int>>&adj, vector<bool>&visit,vector<int>&ans, int &level)
    {
        
        visit[i] = true;
        queue<int>q;
        q.push(i);
        
        
        while(!q.empty())
        {
           int size = q.size();
            
           for(int j =0 ; j<size;j++)
           {
               
               int s = q.front();
               q.pop();
               
            
               
               for(auto& c : adj[s])
               {
                   
                   
                   if(!visit[c])
                   {
                       // cout<<"C->>" << c<<" ";
                       q.push(c);
                       visit[c]= true;
                       
                       
                   }
                   
                   
               }
               

               
            
             
                   
         
               
              
               
//              level++;
               
//             cout<<"Level"<< " " <<level<<" ";
               
              
               
               
           }
            
            
//             if(!q.empty())
//             {
                 level++;
//             }
             
           
            

           
            // level=0;
            
            
            
            
         }
        
        
        
       
        
        
    }
    
    
    
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        
       if(n==1) return vector<int>{0};
        
        vector<vector<int>>adj(n);
        vector<int>indegree(n);
         vector<int>res;
         for(auto edge : edges)
         {
             
              adj[edge[1]].push_back(edge[0]);
        adj[edge[0]].push_back(edge[1]);
            
             indegree[edge[0]]++;
             indegree[edge[1]]++;
         }
        queue<int>q;
        
        for(int i=0;i<n;i++)
        {
            if(indegree[i]==1)
            {
                q.push(i);
                indegree[i]--;
            }
        }
        
        
        
        while(!q.empty())
        {
            res.clear();
            
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                
                int s = q.front();
                q.pop();
                res.push_back(s);
                for(auto &c : adj[s])
                {
                    
                    indegree[c]--;
                    if(indegree[c]==1)
                    {
                        q.push(c);
                    }
                    
                    
                }
            }
        }
            
       
            return res;
            
            
            
            
        
        
        
        
        
        
        
                                                                       
                                 
     
//            vector<int>ans(n,0);
                                                                       
                                                                       
//          for(int i=0;i<n;i++)
//          {
//              int level=0;
//              vector<bool>visit(n,false);
             
//              solve(i,adj,visit,ans,level);
              
//              ans[i] = level;
             
//          }
                  
//               int mini = INT_MAX;
                              
        
        
// //          for(int i=0;i<ans.size();i++)
// //                                                                                                                                 {
// //                                                                                                                                 cout<<ans[i]<<" ";
// //          }
        
//         // cout<<endl;
//                                                                                                                             for(int i=0;i<ans.size();i++)
//                                                                                                                                 {
           
//                                                                                                                                    mini = min(mini,ans[i]);
                                                                                                                                
//                                                                                                                             }
                                                                       
//      for(int i=0;i<ans.size();i++)
//      {
//          if(mini == ans[i])
//          {
//              res.push_back(i);
//          }
//      }
                                                                       
//               return res;
             
                                                                    
         
       
        
    }
};