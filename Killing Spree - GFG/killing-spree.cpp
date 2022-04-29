// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
public:
   
   long long int sum(long long int mid, long long int n)
   {
       
    return (mid * 1LL * (mid+1)* (2*mid+1))/6;
   
   }
    

    long long int killinSpree(long long int n)
    {
        // Code Here
        const int N=int(1e6);
            long long int l=1;
            long long int ans=0;
            long long int h = N;
        
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            
            if(sum(mid,n)>n)
            {
                
                h=mid-1;
                
            }
            
            else{
                ans=mid;
                l=mid+1;
            }
            
        }
        return ans;
        
        
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n; cin>>n;
        Solution obj;
        long long int ans = obj.killinSpree(n);
        cout<<ans<<"\n";
    }
    return 0;
}
  // } Driver Code Ends