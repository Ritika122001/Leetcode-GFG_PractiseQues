class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      
      sort(nums.begin(),nums.end());
      int i=0;
      int op=0;
      
      int j = nums.size()-1;
      
      while(i<j)
      {
        if(nums[i]+nums[j]==k)
        {
          op++;
          i++;
          j--;
          
        }
       
       else if(nums[i]+nums[j] < k)
       {
         i++;
       }
        
        else{
          j--;
        }
        
      }
      
      return op;
        
    }
};