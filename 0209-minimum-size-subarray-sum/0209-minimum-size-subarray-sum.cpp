class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int sum=0;
        int mini = INT_MAX;
        while(j<nums.size())
        {
            sum+=nums[j];
            if(sum<target)
            {
                j++;
            }
            
            else
            
            {
                while(sum>=target)
                {
             
                mini = min(mini,j-i+1);
                sum-=nums[i];
                i++;
                } 
                j++;
                
            }    
        
        
        }
        
        if(mini==INT_MAX)
        {
            return 0;
        }
        
        return mini;
        
    }
};