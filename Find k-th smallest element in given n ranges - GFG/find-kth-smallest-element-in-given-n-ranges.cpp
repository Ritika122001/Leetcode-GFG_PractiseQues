// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    vector<int>kthSmallestNum(vector<vector<int>>&range, vector<int>queries){
        //Write your code here
        
        unordered_set<int>st;
        for(auto c : range)
        {
            for(int i=c[0] ; i<=c[1] ;i++){
                st.insert(i);
            }
        }
        
        vector<int>ans;
        for (const auto &it: st) {
              ans.push_back(it);
}


vector<int>res;

sort(ans.begin(),ans.end());


// for(int i=0;i<ans.size();i++)
// {
//     cout<<ans[i] <<" ";
// }

// cout<<endl;

for(int i=0;i<queries.size();i++)
{
     if(queries[i] > ans.size())
     {
         res.push_back(-1);
     }
     else
       res.push_back(ans[queries[i]-1]);
     
}
return res;
    
 
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
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(range, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}
  // } Driver Code Ends