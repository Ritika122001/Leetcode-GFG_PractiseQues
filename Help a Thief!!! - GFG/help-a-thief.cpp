// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
        // code here
        
        // sort(B,B+N);
        vector<pair<int,int>>arr;
        for(int i = 0; i < N; i++) arr.push_back({B[i], A[i]});
        sort(arr.begin(), arr.end());
        int sum=0;  
        int ans=0;
             
        for(int i=N-1;i>=0;i--)
        {
           
            if(T-arr[i].second > 0)
            {
                ans+=arr[i].first * arr[i].second;
                T-=arr[i].second;
            }
            
            else{
                ans+= T * arr[i].first;
                break;
            }
            
            
        }
        
        return ans;
        
        
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends