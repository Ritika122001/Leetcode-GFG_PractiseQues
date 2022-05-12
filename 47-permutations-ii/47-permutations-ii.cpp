class Solution {
public:
    
        void per(vector<vector<int>>&res,  vector<int>nums, int l, int h)
    {
        
       
            if(l>=nums.size())
            {
                res.push_back(nums);
                return ;
             
            }
        
            for(int i=l ; i<nums.size();i++) 
        {
            
            swap(nums[l], nums[i]);
            per(res,nums,l+1,h);
            swap(nums[l], nums[i]);
    }
        }
            
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        //generate all permutations and put them in set 
        
                vector<vector<int>>res;
         
        
        per(res,nums,0, nums.size());
        set<vector<int>>st;
        
        for(auto &c : res)
        {
            st.insert(c);
        }
        
        
        vector<vector<int>>v(st.begin(), st.end());
        return v;
        
    }
};