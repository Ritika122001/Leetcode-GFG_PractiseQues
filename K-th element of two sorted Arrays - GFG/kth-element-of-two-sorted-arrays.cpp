// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        
        int res[n+m];
        int p=0;
        
         int i=0;
         int j = 0;
         
         while(i<=n-1 and j<=m-1)
         {
             
             if(arr1[i] < arr2[j])
             {
                 res[p] = arr1[i];
                 p++;
                 i++;
             }
             
             else{
                 
                 res[p] = arr2[j];
                 p++;
                 j++;
             }
             
             
             
         }
         
         while(i<=n-1)
         {
             res[p] = arr1[i];
             p++;
             i++;
         }
        
        while(j<=m-1)
         {
             res[p] = arr2[j];
             p++;
             j++;
         }
         
        //  for(int i=0;i<res.size();i++)
        //  {
        //      cout<<res[i]<<" ";
        //  }
        
        
        return res[k-1];
        
    }
};

// { Driver Code Starts.
 
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,m,k;
		cin>>n>>m>>k;
		int arr1[n],arr2[m];
		for(int i=0;i<n;i++)
			cin>>arr1[i];
		for(int i=0;i<m;i++)
			cin>>arr2[i];
		
		Solution ob;
        cout << ob.kthElement(arr1, arr2, n, m, k)<<endl;
	}
    return 0;
}  // } Driver Code Ends