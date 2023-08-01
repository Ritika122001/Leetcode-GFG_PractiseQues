class Solution {
public:
    
    void solve(int id , int n, int k, vector<vector<int>>&ans, vector<int>&res)
    {
        
        if(k==0)
        {
            ans.push_back(res);
            return;
        }
        
        
        for(int i=id;i<=n;i++)
        {
            res.push_back(i);
            solve(i+1,n,k-1,ans,res);
            res.pop_back();
        }
        
        
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>>ans;
        vector<int>res;
         solve(1,n,k,ans,res);
        return ans;
    }
}; 