// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<vector<int>> formCoils(int n) {
        
        // code here
        
        
        //same like sp
        vector<vector<int>>mat(4*n , vector<int>(4*n));
        
        
        int k=1;
        
        for(int i=0;i<4*n;i++)
        {
            
            for(int j=0;j<4*n;j++)
            {
                mat[i][j] = k++;
                
            }
        }
        
        
        vector<int>res;
        
        
        int T=0;
        int B = 4*n;
        int L=0;
        int R = B-1;
        
        
        while(B>T and L<R)
        {
            
             for(int i=T;i<B;i++)
        {
            res.insert(res.begin() , mat[i][L]);
            
        }
        T++;
        L++;
        
        
        for(int i=L;i<R;i++)
        {
            res.insert(res.begin() , mat[B-1][i]);
        }
        B--;
        L++;
        
        
        for(int i=B-1;i>=T;i--)
        {
            
            res.insert(res.begin() , mat[i][R-1]);
        }
        R--;
        B--;
        
        
        
        for(int i=R-1;i>=L;i--)
        {
            res.insert(res.begin() , mat[T][i]);
            
            
        }
        
        T++;
        R--;
        
        
        }
       
        
        
        B=4*n-1;
        T=0;
        L=1;
        R = B;
        vector<int>res2;
        
        
        while(B>T and R>L)
        {
              
              for(int i=B;i>=T;i--)
        {
            res2.insert(res2.begin() , mat[i][R]);
        }
        B--;
        R--;
        
        for(int i=R;i>=L;i--)
        {
            res2.insert(res2.begin() , mat[T][i]);
        }
        
        T++;
        R--;
        
        
        for(int i=T;i<=B;i++)
        {
            res2.insert(res2.begin() , mat[i][L]);
        }
        
        L++;
        T++;
        
        
        for(int i=L;i<=R;i++)
        {
            res2.insert(res2.begin() , mat[B][i]);
        }
        
        B--;
        L++;
        
            
        }
        
      
        
        
        return {res2,res};
        
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        vector<vector<int>> ptr = ob.formCoils(n);
        
        for(auto it: ptr)
        {
            for(int i: it)
                cout<<i<<" ";
            cout<<endl;
        }
    }
    return 0;
}  // } Driver Code Ends