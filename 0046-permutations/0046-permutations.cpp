class Solution {
public:
        
    void solve(vector<int>& nums, int index,  vector<vector<int>>&res, vector<int>ans, vector<bool>&used)
    {
        
        if(ans.size() == nums.size())
        {
            res.push_back(ans);
            return;
        }
        
        for(int j=0;j<nums.size();j++)
        {
            if(!used[j])
            {
                
                ans.push_back(nums[j]);
                used[j] = true;
                solve(nums,j+1,res,ans,used);
                ans.pop_back();
                used[j] = false;
            }
            
            
        
        }
      
        
    }
    
    
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<int>ans;
         vector<bool> used(nums.size(), false);

        vector<vector<int>>res;
        solve(nums,0,res, ans,used);
        return res;
        
    }
};