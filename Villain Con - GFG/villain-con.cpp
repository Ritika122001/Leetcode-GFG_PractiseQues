// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int minColour(int N, int M, vector<int> mat[]) {
        // code here
        vector<int>indegree(N+1,0);
        vector<vector<int>>adj(N+1);
        
        for(int i=0;i<M;i++)
        {
            adj[mat[i][1]].push_back(mat[i][0]);
            indegree[mat[i][0]]++;
            
        }
        
        
        queue<int>q;
        
        for(int i=1;i<indegree.size();i++)
        {
            if(indegree[i]==0)
            {
                q.push(i);
            }
        }
        
        int level = 0;
        
        while(!q.empty())
        { 
            level++;
            
            int size = q.size();
            for(int i=0;i<size;i++)
            {
                  int x= q.front();
            q.pop();
            
            for(auto n : adj[x])
            {
                indegree[n]--;
                if(indegree[n]==0)
                {
                    q.push(n);
                }
            }
            }
          
              
            
        }
        return level;
        
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends