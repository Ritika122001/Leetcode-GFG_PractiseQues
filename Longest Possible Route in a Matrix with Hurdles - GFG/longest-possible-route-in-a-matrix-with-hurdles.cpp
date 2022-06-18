// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:


int solve(vector<vector<int>>&matrix, int xs, int ys, int xd, int yd , vector<vector<bool>>&vis)

{       int x=matrix.size(),y=matrix[0].size();
        if(xs<0 || ys<0 || xs>=x || ys>=y || matrix[xs][ys]==0 || vis[xs][ys]==true)
            return INT_MIN;


    if(xs==xd and ys==yd)
    {
        return 0;
    }
    
    vis[xs][ys]=true;
    
    int r = solve(matrix,xs,ys+1,xd,yd,vis);
    int l =  solve(matrix,xs,ys-1,xd,yd,vis);
    int u = solve(matrix,xs-1,ys,xd,yd,vis);
    int d = solve(matrix,xs+1,ys,xd,yd,vis);
    
    vis[xs][ys]=false;
    int first = max(r,l) ;
    int second = max(u,d); 
    
    return 1 + max(first,second);
   
    
}

    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        // code here
        
       vector<vector<bool>>vis(matrix.size(),vector<bool>(matrix[0].size(),false));
        int val =  solve(matrix,xs,ys,xd,yd,vis);
        if(val<1)
        {
            return -1;
        }
        return val;
        
        
        
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends