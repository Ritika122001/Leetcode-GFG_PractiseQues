// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
    double solve(int n, double magnets[], double l, double h)
    {
     

        while(l<h)
        {
         
            double total=0 ;
            
            double mid = l + (h-l)/2;
            
            for(int i=0;i<n;i++)
            {
                total+= 1/ (mid-magnets[i]);
            }
            
            if(abs(total) < 0.000001)
                 return mid;
      
            
            
            else if(total<0)
            {
                h=mid;
            }
            
            else{
                
                l=mid;
            }
            
            
            
        }
        
        
        return l;
        
        
    }
    
    
    
    
        void nullPoints(int n, double magnets[], double getAnswer[])
    {
        // Your code goes here 
        
        for(int i=0;i<n-1;i++)
        {
            getAnswer[i] = solve(n,magnets,magnets[i],magnets[i+1]);
        }
    
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        double magnets[n], getAnswer[n];
        for(int i=0;i<n;i++)
        cin>>magnets[i];
        Solution ob;
        ob.nullPoints(n, magnets, getAnswer);
        
        for(int i=0; i<n-1; i++)
            printf("%0.2lf ",getAnswer[i]);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends