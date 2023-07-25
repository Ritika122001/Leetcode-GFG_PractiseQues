class Solution {
public:
    
    void solve(int n , vector<int>&arr, int tar , vector<int>&ans, vector<vector<int>>&res,set<vector<int>>&st)
    {
        
    if (tar == 0)
    {
        sort(ans.begin(), ans.end());
        st.insert(ans); // Valid combination found, add it to the result
        return; // Backtrack to explore other possibilities
    }
        

     if(tar<0 || n>=arr.size())
            return;
        
    if (arr[n] <= tar)
    {
        ans.push_back(arr[n]);
        solve(n+1, arr, tar - arr[n], ans, res,st);
        ans.pop_back();
        // solve(n+1, arr, tar, ans, res,st);

    }
        
   while( n+1<arr.size() and arr[n]==arr[n+1]) n++;

        

    // else
      solve(n+1, arr, tar, ans, res,st);
        
//         if(arr[n-1]<=tar)
//         {
//             ans.push_back(arr[n-1]);
//             solve(n-1, arr, tar-arr[n-1],ans,res);
//             ans.pop_back();
//             solve(n-1,arr,tar,ans,res);
//         }
        
//         else
//         {
//            solve(n-1,arr,tar,ans,res);
   
//         }
            
        
    }

    
    vector<vector<int>> combinationSum2(vector<int>& arr, int tar) {
        
        sort(arr.begin(), arr.end());
        vector<int>ans;
        vector<vector<int>>res;
        set<vector<int>>st;
        solve(0 , arr, tar , ans, res ,st);
        
        for(auto c :  st)
        {
            res.push_back(c);
        }
        
        return res;
        
    }
};