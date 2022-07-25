class Solution {
public:
    
    int first(vector<int>nums, int target)
    {
        
        int l=0;
        int h= nums.size()-1;
        int res=-1;
        
        while(l<=h)
        {
            
            int mid=  (l+h)/2;
            if(nums[mid]==target)
            {
                res= mid;
                h=mid-1;
            }
            
            else if(nums[mid]<target)
            {
               l=mid+1; 
            }
            
            else{
                h=mid-1;
            }
        }
        
        return res;
        
    }
    
    
    
        int last(vector<int>nums, int target)
    {
        
        int l=0;
        int h= nums.size()-1;
        int res=-1;
        
        while(l<=h)
        {
            
            int mid=  (l+h)/2;
            if(nums[mid]==target)
            {
                res=mid;
                l=mid+1;
            }
            
            else if(nums[mid]<target)
            { l=mid+1;
              
            }
            
            else{
                h=mid-1;
            }
        }
        
        return res;
        
    }
    
    
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>ans;
        
        int firstocc = first(nums, target);
        int lastocc = last(nums,target);
        
        
        ans.push_back(firstocc);
        ans.push_back(lastocc);
        
        return ans;
        
    }
};