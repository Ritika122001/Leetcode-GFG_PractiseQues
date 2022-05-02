class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
      
      int i =0; //looks for even number
      int j= nums.size()-1; //looks for odd number
      
      while(i<=j)
      {
        if(nums[i]%2==0 and nums[j]%2!=0)
        {
          i++;
          j--;
        }
        else if(nums[i]%2!=0 and nums[j]%2!=0)
        {
          
           j--;
          
        }
        
        else if(nums[i]%2==0 and nums[j]%2==0)
        {
          i++;
          
        }
        
        else{
          
          swap(nums[i],nums[j]);
          i++;
          j--;
          
        }
        
      }
      
      return nums;
      
        
    }
};