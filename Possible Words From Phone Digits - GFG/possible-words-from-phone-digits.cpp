// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    void solve(int a[] , int N , vector<string>&ans , int i , string op)
    {
        
         vector<string>mp = {"abc", "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"};
        
        if(i>=N)
        {
            ans.push_back(op);
            return;
            
        }
        
        int v  = a[i];
       
        
        for(auto c : mp[v-2])
        {
               op.push_back(c);
               solve(a,N,ans,i+1,op);
               op.pop_back();
            // solve(a,N,ans,i+1,op);
               
        }
 
        
    }
    
    
    
    
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string>ans;

        solve(a,N,ans,0,"");
        
        return ans;
        
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends