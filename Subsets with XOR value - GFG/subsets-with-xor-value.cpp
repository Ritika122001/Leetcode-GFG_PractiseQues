// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{
public:

int count=0;

   int solve(vector<int>&arr, int N, int i, int sum , int K)
    {
 
  if(i==N)
  {
    if(sum==K) count++;
      
     return 0;
  }
   
   return solve(arr,N,i+1,sum^arr[i],K) + solve(arr,N,i+1,sum, K);
    
    
    
}


    int subsetXOR(vector<int> arr, int N, int K)
    {
        
      
     solve(arr,N,0,0,K);
     
     return count; 

    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int K;
        cin>>K;
        vector<int> v;
        for(int i = 0;i<N;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }    
        Solution ob;
        cout << ob.subsetXOR(v,N,K) << endl;
    }
    return 0; 
}  // } Driver Code Ends