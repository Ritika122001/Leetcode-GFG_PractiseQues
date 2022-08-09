class Solution {
public:
    
    int mod = 1e9 + 7;
      unordered_map<int, long long int> dp;
    
    long long int solve(set<int>&st, vector<int>&arr , int root)
    {
        
     
        
        long long cnt=1;
    // unbounded knapsack will be used here
        if(dp.count(root))
            return dp[root];
       
        
        for(auto c : st)
        {
            
            
            if(root%c!=0)
            {
                continue;
            }
            
            
            int fact1 = c;
            int fact2 = root/c;
            
            if(st.count(fact2))
            {
                cnt += solve(st,arr,fact1) *solve(st,arr,fact2);
                cnt %= mod;
            }
            
            
        }
     
  
        
        return dp[root] =cnt;
        
        
        
    }
    
    
    int numFactoredBinaryTrees(vector<int>& arr) {
        
        
      set<int>st;
        int res=0;
        
        for(int i=0;i<arr.size();i++)
        {
            st.insert(arr[i]);
        }
        
        
        for(int i=0;i<arr.size();i++)
        {
            res+= solve(st,arr,arr[i]);
            res%=mod;
        }
        
        
        return res;
      
    }
};