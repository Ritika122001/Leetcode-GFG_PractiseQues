// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

 
  

  void solve(int N ,  int A , int C , int B , vector<pair<int,int>>&ans)
  {
      
      if(N==0)
         return;

      
      solve(N-1 , A , B , C , ans);
      
      ans.push_back({A,C});
      
      solve(N-1,  B, C, A, ans);
      
  
  }
   



    vector<int> shiftPile(int N, int n){
        // code here
        vector<pair<int,int>>ans;
        solve(N, 1, 3 , 2 , ans);
        
        
    //  /   for(auto c: ans)
    //     {
    //         cout<<c.first<<" "<<c.second<<endl; 
    //     }
           
     
        return { ans[n-1].first , ans[n-1].second}; 
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends