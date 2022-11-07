//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:


   void solve(vector<int>&ans, int target, int n, vector<int>&res)
   {
       if(n<=0)
       {
           return;
       }
       
       if(ans[n-1]<=target)
       {
           res.push_back(ans[n-1]);
           solve(ans,target-ans[n-1],n,res);
           
       }
       
       else{
           
        solve(ans,target,n-1,res);
        
           
       }
       
   }

    vector<int> minPartition(int target)
    {
        // code here
        vector<int>ans= {1,2,5,10,20,50,100,200,500,2000};
        vector<int>res;
        
         solve(ans,target,ans.size(),res);
         return res;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends