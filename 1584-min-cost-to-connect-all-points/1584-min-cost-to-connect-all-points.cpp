class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
      
      priority_queue< pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;
      vector<vector<pair<int,int>>>graph(points.size());
      vector<bool>visited(points.size(),false);
      
      for(int i =0;i<points.size();i++)
      {
        for(int j=i+1;j<points.size();j++)
         { 
          int dist = abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
          graph[i].push_back({j, dist});
          graph[j].push_back({i,dist});
        }
        
      }
      
      
      //value and cost
      pq.push({0,0});
      int cost=0;
    
      
      while(!pq.empty())
      {
        
        pair<int,int>x = pq.top();
        pq.pop();
        if(visited[x.second])
        {
          continue;
        }
        
       
        
        visited[x.second]=true;
         int u = x.second;
        cost+=x.first;
        
        for(auto n : graph[u])
        {
          if(!visited[n.first])
          {
            pq.push({n.second, n.first});
          }
          
        }
        
        
        
        
        
        
        
      }
      
      return cost;
      
      
      
        
    }
};