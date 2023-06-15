class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        sort(nums.begin() , nums.end());
        set<vector<int>>st;
        
        for(int i=0;i<nums.size() ;i++)
        {
            
           long long int target1 = target - nums[i];
            for(int j = i+1;j<nums.size();j++)
            {
                long long int target2 = target1 - nums[j];
                
                int l =  j +1;
                int h = nums.size()-1;
                
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
            }
        }
         vector<vector<int>> res(st.begin(),st.end());
     
        return res;
        
        
        
    }
};