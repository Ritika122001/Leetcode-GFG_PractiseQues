class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
       if(nums.size()==0)
            return 0;
      
      unordered_set<int>s;
      
      for(int i=0;i<nums.size();i++)
      {
        s.insert(nums[i]);
        
      }
      
      
      int res=INT_MIN;

      
      
      for(int i=0;i<nums.size();i++)
      {
        
        if(s.find(nums[i]-1) == s.end())
        {
             int ans=1;
             int curr=nums[i];
        
            while(s.find(curr+1) != s.end())
            {
              
              curr= curr+1;
              ans++;
            
              
            }
          
  
            
            res = max(res,ans);
          }
          
          
          
        }
        
        
        
      
      
      return res;
      
      
      
      
    }
};