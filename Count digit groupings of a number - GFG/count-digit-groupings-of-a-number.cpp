// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	
	int solve(string str, int idx, int sum , vector<vector<int>>&memo)
	{
	    
	    if(idx==str.length())
	    {
	        return 1;
	    }
	    
	    if(memo[idx][sum]!=-1)
	    {
	        return memo[idx][sum];
	    }
	    
	    int currsum=0;
	    int ans=0;
	    
	    for(int i=idx;i<str.length();i++)
	    {
	        
	        currsum+=str[i]-'0';
	        if(currsum>=sum)
	        {
	            ans+=solve(str,i+1,currsum,memo);
	        }
	    }
	    
	    return memo[idx][sum]= ans;
	}
	
	
	int TotalCount(string str){
	    // Code here
	    vector<vector<int>>memo(str.length() , vector<int>(1000,-1));
	    return solve(str,0,0,memo);
	    
	    
	    
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution ob;
		int ans = ob.TotalCount(str);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends