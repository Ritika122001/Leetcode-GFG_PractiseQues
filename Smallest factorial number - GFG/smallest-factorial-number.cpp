// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
    int solve(int mid , int n)
    {
        
        int cnt=0;
        int f= 5;
        
        
       while(f<=mid)
       {
           cnt+=mid/f;
           f*=5;
           
       }
        
        return cnt>=n;
        
        
        
        
        
        
    }
    
    
        int findNum(int n)
        {
        //complete the function here
        
         int l =0 ;
         int h = 5*n;
         
         int ans=0;
         
         while(l<=h)
         {
             
             int mid = l + (h-l)/2;
             if(solve(mid,n))
             {
                 ans=mid;
                 h=mid-1;
                 
             }
             
             else{
                 l=mid+1;
             }
             
         }
         
         return ans;
        
        
        
        
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends