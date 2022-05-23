// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution
{
  public:
     bool flag=true;
    
  
   void solve(int i, vector<vector<int>>&adj , int n, int m, vector<int>&vis, vector<int>&dfsv, stack<int>&st)

  
   {
       
       
     dfsv[i]=1;
     vis[i]=1;
     
     for(auto c : adj[i])
     {
         
         if(!vis[c])
         {
             solve(c,adj,n,m,vis,dfsv,st);
         }
         
         else if(dfsv[c]==1)
         {
             flag = false;
             return;
         }
         
     }
     
     dfsv[i]=0;
     st.push(i);
       
     
     
  
       
   }
  
  
  
  
    vector<int> findOrder(int n, int m, vector<vector<int>> pre) 
    {
        //code here
         stack<int>st;
     vector<int>dfsv(n,0);
     vector<int>ans;
    
     vector<int>vis(n,0);
        
     vector<vector<int>>adj(n,vector<int>());
        
        
        for(auto& edge : pre)
        {
            adj[edge[1]].push_back(edge[0]);
            
        }
        
        
        for(int i=0;i<n;i++)
        {
            
            if(!vis[i])
            {
                solve(i,adj,n,m,vis,dfsv,st);
            }
            
        }
        
        if(flag==false || st.empty())
        {
            
            return { };
        }
        
          while(!st.empty())
	    {
	        ans.push_back(st.top());
	        st.pop();
	        
	    }
	    
      
      return ans;
        
    }
};

// { Driver Code Starts.

int check(int V, vector <int> &res, vector<int> adj[]) {
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> prerequisites;

        for (int i = 0; i < m; i++) {
            cin >> u >> v;
            prerequisites.push_back({u,v});
        }
        
        vector<int> adj[n];
        for (auto pre : prerequisites)
            adj[pre[1]].push_back(pre[0]);
        
        Solution obj;
        vector <int> res = obj.findOrder(n, m, prerequisites);
        if(!res.size())
            cout<<"No Ordering Possible"<<endl;
        else
            cout << check(n, res, adj) << endl;
    }
    
    return 0;
}  // } Driver Code Ends