class Solution {
public:
    
  
  
      void unionf(int u , int v, vector<int>&parent, vector<int>&rank)
      {
        
          u = find(u,parent);
        v = find(v,parent);
        
        if(rank[u] < rank[v])
        {
          parent[u] = v;
        }
        
        else if(rank[v] < rank[u])
        {
          parent[v] = u;
        }
        
        else{
          parent[v] = u;
          rank[u]++;
        }
      }
      
      int find(int u, vector<int>&parent)
      {
        if(u==parent[u])
        {
          return u;
        }
        
        return parent[u] = find(parent[u],parent);
      }
      
      
  
    int minCostConnectPoints(vector<vector<int>>& points) {
      
      int cost=0;
      
      vector<pair<int,pair<int,int>>>graph(points.size());
      
  
            for(int i =0;i<points.size();i++)
      {
        for(int j=i+1;j<points.size();j++)
         { 
          int dist = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
          graph.push_back({dist, {i,j}});
          graph.push_back({dist , {i,j}});
        }
        
      }
      
          sort(graph.begin(),graph.end());
      
        vector<int> parent(points.size());
    vector<int> rank(points.size(),0);
    
 
      for(int i=0;i<points.size();i++)
        
      {
        parent[i]=i;
      }
      
      
      for(auto x : graph)
      {
        if(find(x.second.first,parent)!=find(x.second.second,parent))
        {
          
          cost+=x.first;
          unionf(x.second.first , x.second.second, parent , rank);
        }
      }
      
    
      
      return cost;
      
      
      
      
//       priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;
//       vector<vector<pair<int,int>>>graph(points.size());
//       vector<bool>visited(points.size(),false);
      
//       for(int i =0;i<points.size();i++)
//       {
//         for(int j=i+1;j<points.size();j++)
//          { 
//           int dist = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
//           graph[i].push_back({j, dist});
//           graph[j].push_back({i,dist});
//         }
        
//       }
      
      
//     //cost and value  pq will min heap acc to cost
//       pq.push({0,0});
//       int cost=0;
    
      
//       while(!pq.empty())
//       {
        
//         pair<int,int>x = pq.top();
//         pq.pop();
//         if(visited[x.second])
//         {
//           continue;
//         }
        
       
        
//         visited[x.second]=true;
//          int u = x.second;
//         cost+=x.first;
        
//         for(auto n : graph[u])
//         {
//           if(!visited[n.first])
//           {
//             pq.push({n.second, n.first});
//           }
          
//         }
        
        
        
        
        
        
        
//       }
      
//       return cost;
      
      
      
        
    }
};