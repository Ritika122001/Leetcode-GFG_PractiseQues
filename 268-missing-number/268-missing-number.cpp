class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
       sort(nums.begin() , nums.end());
        int n = nums.size();
        
        int ans=-1;
        
        int l = 0;
        int h = n-1;
        
        while(l<=h)
        {
            
            int mid = (l+h)/2;
            if(nums[mid]>mid)
            {
                ans= mid;
                h=mid-1;
            }
            
            else{
                l=mid+1;
            }
            
         
            
            
        }
        
        if(ans==-1)
        {
            return l;
        }
        return ans;
        
        
    }
};