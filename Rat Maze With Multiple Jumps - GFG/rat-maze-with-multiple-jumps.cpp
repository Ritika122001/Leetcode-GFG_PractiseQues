// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

bool isvalid(int i, int j , vector<vector<int>>&matrix)
{
    
    
    if(i>=matrix.size() || j>=matrix[0].size() || matrix[i][j]==0)
       return false;
     
     return true;
    
}



bool solve(vector<vector<int>>&mat,vector<vector<int>>&matrix , int i, int j )
{
    
    
    if(i==matrix.size()-1 and j==matrix[0].size()-1)
    {
    mat[i][j]=1;
         
    return true;
    
    }
  
   
    
    if(isvalid(i,j,matrix))
    {
        
        mat[i][j]=1;
        
        for(int k=1;k<=matrix[i][j];k++)
        {
            
            if(solve(mat,matrix,i,j+k)) return true;
            if(solve(mat,matrix,i+k,j)) return true;
            
            
        }
        
        mat[i][j]=0;
   
        
    }
    
    return false;
    
    
    
}
    




	vector<vector<int>> ShortestDistance(vector<vector<int>>&matrix)
	
	{
	   // Code here
	   
	   vector<vector<int>>mat(matrix.size() , vector<int>(matrix[0].size(),0));
	   
	   if(!solve(mat,matrix,0,0))
	   
	   {
	       return {{-1 }};
	   }
	  
	   return mat;
	   
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.ShortestDistance(matrix);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends