// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:


  int dfs(vector<vector<int>> &adj, int N , int i, vector<int>&vis)
  {
      
      vis[i]=1;
      int temp=0;
      
      for(int c: adj[i])
      {
          
          if(!vis[c])
          {
             temp = max(temp,1+ dfs(adj,N,c,vis)); 
              
          }
      }
      
      return temp;
      
      
      
      
      
  }
    int partyHouse(int N, vector<vector<int>> &adj){
        // code here
        
        
        int ans=INT_MAX;
        for(int i=1;i<=N;i++)
        {
            vector<int>vis(N+1,0);
            ans = min(ans,dfs(adj,N,i,vis));
        }
        
        return ans;
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, x, y;
        cin>>N;
        vector<vector<int>> adj(N+1);
        for(int i = 0;i < N-1;i++){
            cin>>x>>y;
            adj[x].emplace_back(y);
            adj[y].emplace_back(x);
        }
        
        Solution ob;
        cout<<ob.partyHouse(N, adj)<<"\n";
    }
    return 0;
}  // } Driver Code Ends