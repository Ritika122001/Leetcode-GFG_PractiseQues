class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
      
        sort(nums.begin(), nums.end());
        
        
        set<vector<int>>ans;
        
        
        for(int i=0;i<nums.size();i++)
        {
            
            int l = i+1;
            int h=nums.size()-1;
            
            while(l<h)
            {
                
               if(nums[l] + nums[h] + nums[i] ==0 )
               {
                   ans.insert({nums[i],nums[l],nums[h]});
                   l++;
                   h--;
               }
                
                else if(nums[i]+nums[l]+nums[h]<0)
                {
                    l++;
                }
                
                else{
                    h--;
                }
                
                
            }
        }

       vector<vector<int>> res(ans.begin(),ans.end());
     
        return res;
        
       
    }
};