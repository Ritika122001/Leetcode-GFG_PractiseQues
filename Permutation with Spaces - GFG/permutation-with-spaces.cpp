// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:


void solve(string S, int i, int j, vector<string>&res, string t)
{
    
    if(i==j)
    {
        t+=S[i];
        res.push_back(t);
        return ;
    }
    
    else{
        
  
    t+=S[i];
    solve(S,i+1,j,res,t+' ');
     solve(S,i+1,j,res,t);
    t.pop_back();
   
    
    }
  
    
    
}



    vector<string> permutation(string S){
        // Code Here
        
        vector<string>res;
        string t="";
        solve(S,0,S.length()-1,res,t);
        
        return res;
    }
};

// { Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}
  // } Driver Code Ends