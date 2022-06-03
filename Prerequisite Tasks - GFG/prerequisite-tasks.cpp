// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
 
 bool solve(vector<vector<int>>&adj, int i ,  vector<bool>&dfsv, vector<bool>&vis)
 {
     
     dfsv[i]=true;
     vis[i]=true;
     
     for(auto c : adj[i])
     {
         if(!vis[c])
         
        
        {
            if(solve(adj,c,dfsv,vis))
            {
                return true;
            }
            
           
        }
        
         else if(dfsv[c]==true)
                return true;
     }
        
        dfsv[i]=false;
        return false;
        
    
     
 }



	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    // Code here
	    
	    //if cycle present -> false
	   // else -> true
	   
	   vector<vector<int>>adj(N);
	   
	   for(auto e : pre)
	   {
	       adj[e.second].push_back(e.first);
	   }
	   vector<bool>dfsv(N,false);
	   
	   vector<bool>vis(N,false);
	   
	   for(int i=0;i<N;i++)
	   {
	       if(!vis[i])
	       {
	           if(solve(adj,i,dfsv,vis))
	           {
	               return false;
	           }
	       }
	   }
	   
	   return true;

	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}  // } Driver Code Ends