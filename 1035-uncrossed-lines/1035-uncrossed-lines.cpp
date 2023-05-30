class Solution {
public:
    
    int func(int i, int j, vector<int>&nums1, vector<int>&nums2, vector<vector<int>>&memo)
    {
        
        if(i==0 || j==0) return 0;
        
        if(memo[i][j]!=-1)
        {
            return memo[i][j];
        }
        
        if(nums1[i-1] == nums2[j-1])
        {
             memo[i][j] = 1 + func(i-1,j-1,nums1,nums2,memo);
        }
        else
        {
             memo[i][j]=  max(func(i-1,j,nums1,nums2,memo) , func(i,j-1,nums1,nums2,memo));
        }
    
        return memo[i][j];
        
    }
    
    int maxUncrossedLines(vector<int>&nums1, vector<int>& nums2) 
    {
        
        int n =nums1.size();
        int m = nums2.size();
        vector<vector<int>> memo(n+1,vector<int>(m+1,-1));
        return func(nums1.size(),nums2.size(),nums1, nums2,memo);
        
    }
};