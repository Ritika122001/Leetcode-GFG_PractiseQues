class Solution {
public:
          // vector<vector<int>> dp;
    
    
    
//         int solve(int i, vector<int>&nums, int prev)
//     {
        
        
        
        
//         if(i==nums.size())
//         {
//             return 0;
//         }
        
        
//         if(dp[prev+1][i]!=-1)
//         {
//             return dp[prev+1][i];
//         }
        
//         int pick=0;
        
       
//         if(prev==-1 || nums[prev] < nums[i])
//         {
            
//             pick = 1 + solve(i+1,nums,i);
            
//         }
        
//          int skip = 0+ solve(i+1,nums,prev);
        
//         return dp[prev+1][i] = max(pick,skip);
        
        
        
        
        
        
//     }
    
    
    int lis(vector<int>&arr)
    {
        int n = arr.size();
        vector<int>dp;
         for(int i=0;i<n;i++){
            auto it=lower_bound(dp.begin(),dp.end(),arr[i]);
            if(it==dp.end()) {
                dp.push_back(arr[i]);
            } 
            else {
                *it=arr[i];
            }
        }
        return dp.size();
        
    }
     
 
    
 static bool cmp(const vector<int> &a , const vector<int> &b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
    
    
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        
        
        sort(envelopes.begin(),envelopes.end(),cmp);
           
  
    
   
        vector<int>res;
        
        for(auto c: envelopes)
        {
            res.push_back(c[1]);
        }
        
      return lis(res);
        
        
        
//         vector<int>dp(envelopes.size(),1);
        
//        for(int i=0;i<n;i++)
//        {
//            for(int j=i-1;j>=0;j--)
//            {
               
//                 if(envelopes[j][0]<envelopes[i][0]  &&  envelopes[j][1]<envelopes[i][1]){
                    
//                      dp[i] = max(dp[i], dp[j] + 1);
//                 }
               
//            }
//        }
        
//          return *max_element(begin(dp),end(dp));
        
 
//         // vector<vector<int>>dp(envelopes.size()+1,vector<int>(envelopes.size()+1,-1));
        
        
//         // return solve(envelopes,0,-1,memo);
        
        
        

         
        
   
    }
};