//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int findCity(int n, int m, vector<vector<int>>& edges,
                 int distanceThreshold) {
                   
         vector<pair<int,int>> adj[n];
        for(auto it:edges)
        {
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        
       int cityno,mincitycount=1e9;

                     
        priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        
        for(int i=0;i<n;i++)
        {
            
        pq.push({0,i});
        vector<int>dist(n,1e9);
        dist[i]=0;
        
        while(!pq.empty())
        {  
            pair<int,int>r = pq.top();
            int dis = r.first;
            int node = r.second;
            pq.pop();
            
            for(auto it : adj[node])
            {
                int  adjNode = it.first;
                int edgeweight = it.second;

                if(dis + edgeweight < dist[adjNode])
                {
                   dist[adjNode] = dis + edgeweight;
                   pq.push({dist[adjNode],adjNode});
                
                
                }
            
        }
        }
            
        
        
        int cnt=0;
        
        for(int i=0;i<n;i++)
        {
            if(dist[i] <= distanceThreshold)
            {
                cnt++;
            }
        }
        
      if(cnt<=mincitycount)
            {
                mincitycount=cnt;
                cityno = i;
            }
            
                 }
              
                     
                 return cityno;    
                 }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> adj;
        // n--;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        int dist;
        cin >> dist;
        Solution obj;
        cout << obj.findCity(n, m, adj, dist) << "\n";
    }
}

// } Driver Code Ends