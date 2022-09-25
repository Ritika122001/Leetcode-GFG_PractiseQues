class Solution {
public:
    bool solve(vector<int>&nums , int n , vector<int>&memo)
    {
        if(n==-1)
        {
            return true;
        }
        
        if(n<=0)
        {
            return false;
        }
        
        if(memo[n]!=-1)
        {
            return memo[n];
        }
     
    bool op1 =false , op2=false,op3=false;
        if(n-2>=0)
        {
            
     if(nums[n]==nums[n-1] and nums[n-1] == nums[n-2] )
    {
       op1= solve(nums,n-3,memo);
      
    }
     
            
        }
        
        if(n-2>=0)
        {
               if(nums[n] == nums[n-1]+1 and nums[n-1]==nums[n-2]+1 )
    {
        op2=  solve(nums,n-3,memo);
     
    }
        }
  
 
        if(n-1>=0)
        {
             if(nums[n] == nums[n-1])
    {
       op3= solve(nums,n-2,memo);
       
    }
        }
        
   
        
      return memo[n] =  op1||op2||op3;
        
        
    }
    
    bool validPartition(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>memo(n+1,-1);
        return solve(nums , nums.size()-1,memo);
    }
};