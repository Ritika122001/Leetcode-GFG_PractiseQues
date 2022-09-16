class Solution {
public:
    
    int solve(vector<int>&nums , vector<int>&multi , int i, int j , int k, vector<vector<int>>&memo)
    {
        
        if(k>=multi.size())
        {
            return 0;
        }
    
     
        if(memo[i][k]!=INT_MIN)
        {
            return memo[i][k];
        }

       return memo[i][k] = max( (nums[i] * multi[k] + solve(nums,multi,i+1,j,k+1,memo))  , (nums[j] * multi[k] + solve(nums,multi,i,j-1,k+1,memo) ) );
        
        
    }
    
    int maximumScore(vector<int>& nums, vector<int>& multi) {
     
        vector<vector<int>>memo(multi.size()+1, vector<int>(multi.size()+1,INT_MIN));
        return solve(nums,multi,0,nums.size()-1,0,memo);
        
    }
};