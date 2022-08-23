class Solution {
public:
    
    
    int solve(int firstlen , int secondlen , vector<int>&nums)
    {
        
        vector<int>presumlr(nums.size(),0);
        vector<int>presumrl(nums.size(),0);
        int ans=INT_MIN;
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i<firstlen)
            {
                sum+=nums[i];
                presumlr[i] = sum;
            }
            
            else{
                
                sum+=nums[i] - nums[i-firstlen];
                presumlr[i] = max(sum,presumlr[i-1]);
                
            }
        }
        
        sum=0;
        
            for(int i=nums.size()-1;i>=0;i--)
        {
            if(i>=nums.size()-secondlen)
            {
                sum+=nums[i];
                presumrl[i] = sum;
            }
            
            else{
                
                sum+=nums[i] - nums[i+secondlen];
                presumrl[i] = max(sum,presumrl[i+1]);
                
            }
        }
        
        for(int i=firstlen-1;i<nums.size()-secondlen;i++)
        {
            
            ans= max(ans, presumlr[i]+presumrl[i+1]);
        }
        
        
        
        return ans;
        
        
    }
    
    int maxSumTwoNoOverlap(vector<int>& nums, int firstlen, int secondlen) {

        
        return max(solve(firstlen, secondlen,nums) , solve(secondlen,firstlen,nums));
        
        
        
        
        
        
        
    }
};