// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        // code here
        
        long long l=0;
        long long h = 1e10 ;
        while(l<=h)
        {
            long long mid = l + (h-l)/2;
            long long total=0;
            for(int i=0;i<N;i++)
            {
                long long val = H[i] + A[i]*mid;
                if(val>=L)
                {
                    total+=val;
                }
                
            }
            
            if(total>=M)
            {
                h=mid-1;
            }
            else
              l=mid+1;
        }
        
        return l;
        
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends