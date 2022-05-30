class Solution {
public:
    
    
//     bool alreadysorted(vector<int>nums)
//     {
        
//          vector<int> res;
        
      
//          res = nums;
        
//         sort(res.begin(),res.end());
        
        
//         for(int i=0;res.size();i++)
//         {
//             if(nums[i]!=res[i])
//             {
//                 return false;
//             }
               
//         }
        
//         return true;
        
        
  
//     }
    
    
    
    
    int totalSteps(vector<int>& nums) {
        
       
      
//         int cnt=0;
//         bool flag=true;
        
//         if(alreadysorted(nums))
//         {
//             flag = false;
//         }
        
//         else
//         {
            
//         int i=0;
//         int j=i+1;
       
        
//         while(j<nums.size())
//         {
            
//             if(nums[i] > nums[j])
                
//             {
                 
//                 j++;
//             }
            
//             else{
                
//                 // res.push_back(nums[i]);
//                 cnt++;
//                 i=j;
//                 j++;
                
//             }
       
            
//         }
            
//             flag=true;
            
//         }
        
        
//         if(flag==true)
//         {
//             return 0;
//         }
       
//         else 
//             return cnt;
        
        
        stack<pair<int,int>>st;
        st.push({nums[0],0});
        
        int ans=0;
        // int cnt;
        
        for(int i=1;i<nums.size();i++)
        {
           int  cnt=0;
            
            while(!st.empty() and nums[i]  >= st.top().first)
            {
                cnt = max(cnt, st.top().second);
                st.pop();
            }
            
            if(!st.empty())
            {
                cnt++;
            }
            else
                cnt=0;
            
            ans = max(ans,cnt);
            st.push({nums[i] , cnt});
   
            
        }
        
        return ans;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};