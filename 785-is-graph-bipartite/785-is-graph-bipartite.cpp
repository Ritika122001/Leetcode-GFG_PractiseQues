class Solution {
public:
  
  bool check(vector<vector<int>>& graph, int i , vector<int>&color)
  {
    
    
    color[i]=1;
    queue<int>q;
    q.push(i);
    while(!q.empty())
    {
      
      int node = q.front();
      q.pop();
      
      for(auto c  : graph[node])
      {
        
        if(color[c]==-1)
        {
          color[c] = 1- color[node];
          q.push(c);
        }
        
        else if(color[c]== color[node])
        {
          return false;
        }
        
        
      }
      
    }
    
    return true;
    
    
    
  }
  
  
    bool isBipartite(vector<vector<int>>& graph) {
      
      vector<int>color(graph.size() ,-1);
        
      
      for(int i=0;i<graph.size();i++)
      { 
          if(color[i]==-1)
          {
             if(!check(graph,i,color))
             {
               return false;
             }
          }
        
      }
      
      return true;
        
    }
};