class Solution {
public:
    
   vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
         sort(nums.begin(),nums.end());
        // vector<vector<int>>ans;
       set<vector<int>>st;
        
        for(int i=0;i<nums.size();i++)
        {
         
            long long int target1 = target-nums[i];
            for(int j=i+1;j<nums.size();j++)
            {
                
            long long int target2 = target1-nums[j];
                
             int l = j+1;
            int h=nums.size()-1;
            
            while(l<h)
            {
                
               if(nums[l] + nums[h] == target2 )
               {
                   st.insert({nums[i] ,  nums[j], nums[l],nums[h]});
                  
                   l++;
                   h--;
               }
                
                else if(nums[l]+nums[h]<target2)
                {
                    l++;
                }
                
                else{
                    h--;
                }
                
                
            }
                
              // while(j + 1 < nums.size() && nums[j + 1] == nums[j]) ++j;
                
            }
            // while(i + 1 < nums.size() && nums[i + 1] == nums[i]) ++i;
            
              
            
              
        }
       
        vector<vector<int>> res(st.begin(),st.end());
     
        return res;
        
//       return ans;
        
        
        
    }
};