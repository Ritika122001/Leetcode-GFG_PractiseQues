class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      
//       sort(nums.begin(),nums.end());
//       int i=0;
      int op=0;
      
//       int j = nums.size()-1;
      
//       while(i<j)
//       {
//         if(nums[i]+nums[j]==k)
//         {
//           op++;
//           i++;
//           j--;
          
//         }
       
//        else if(nums[i]+nums[j] < k)
//        {
//          i++;
//        }
        
//         else{
//           j--;
//         }
        
//       }
      
//       return op;
        
//     }
      
      unordered_map<int,int>mp;
      
    
  for(int i=0;i<nums.size();i++)
  {
      if(mp[k-nums[i]]>0)
     
        {
          op++;
          mp[k-nums[i]]--;
     

         
        }
    else{
      
       mp[nums[i]]++;
    }
    
       
        

        
  
  }
      

 
  
      
      return op;
      
      
      
      
      
      
      
      
      
      
      
      
    }
      
      
      
};