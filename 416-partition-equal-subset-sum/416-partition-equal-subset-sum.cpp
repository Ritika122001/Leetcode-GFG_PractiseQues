class Solution {
public:
    
    
bool fun(vector<int>&A , int B  , int n , vector<vector<int>>&memo)
{
    
     if(B==0) return true;
    
    
    if(n==0 || B<0)
    {
      return false; 
    }
    
   
    if(memo[B][n]!=-1)
    {
        return memo[B][n];
    }

    
    if(A[n-1]<=B)
    {
        return  memo[B][n] = fun(A,B-A[n-1],n-1,memo) ||  fun(A,B,n-1,memo);
    }
    
    else
    
      return  memo[B][n] = fun(A,B,n-1,memo);
    
}       
    bool canPartition(vector<int>& nums) {
        
        
        int sum=0;
      
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
        }
        
          
        vector<vector<int>>memo(sum+1, vector<int>(nums.size()+1,-1));
        
        if(sum%2!=0)
        {
            return false;
        }
        
        else
            return fun(nums,sum/2,nums.size(),memo);
        
        
    }
    
};