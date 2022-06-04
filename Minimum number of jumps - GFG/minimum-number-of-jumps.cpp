// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
   
     
  int solve(int arr[] , int i , int n, vector<int>&memo)
  {
     
      
      if(i>=n-1)
      {
          return 0;
      }
   
       int mini = INT_MAX;
       
       if(memo[i]!=-1)
       {
           return memo[i];
       }
  
         for(int j =1;j<=arr[i] and j<n ;j++)
      {
          int jump = 1+solve(arr,i+j,n,memo);
          mini = min(mini, jump);
      }
  
        

   return memo[i] = mini;

  }
  
  
  
    int minJumps(int arr[], int n){
        // Your code here

    //   vector<int>memo(n,-1);
    //     int ans =  solve(arr,0,n,memo);
    
        
    //     if(ans==INT_MAX)
    //     {
    //         return -1;
    //     }
    //     return ans;
        
        
        if(n<=1)
        {
            return 0;
        }
        
        if(arr[0]==0)
        { 
            return -1;
    }
        
        
        int maxreach = arr[0];
        int steps = arr[0];
        int jump = 1;
        
        for(int i=1;i<n;i++)
        {
            
            if(i==n-1)
            {
                return jump;
                
            }
            
            maxreach  = max(maxreach ,i+ arr[i]);
            steps--;
            if(steps==0)
            {
                jump++;
                if(i>=maxreach)
                {
                    return -1;
                }
                
                steps = maxreach - i;
            }
            
            
        }
        
        
        
        
        
        return jump;
        
     
        
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends