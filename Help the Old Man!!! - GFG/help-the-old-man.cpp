// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

 
  

  void solve(int N , int &n,  int A , int C , int B , vector<int>&ans , int cnt)
  {
      
      if(N==0)
         return;

      
      solve(N-1 , n, A , B , C , ans,cnt);
      n--;
      if(n==0)
      {
                ans.push_back(A);
                ans.push_back(C);
                return;
      }
      
      

      
      solve(N-1,  n , B, C, A, ans,cnt);
      
  
  }
   



    vector<int> shiftPile(int N, int n){
        // code here
        vector<int>ans;
        int cnt=0;
        solve(N, n , 1, 3 , 2 , ans , cnt);
        
        
    //   for(auto c: ans)
    //     {
    //         cout<<c<<endl; 
    //     }
           
     
        // return { ans[n-1].first , ans[n-1].second}; 
        return ans;
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