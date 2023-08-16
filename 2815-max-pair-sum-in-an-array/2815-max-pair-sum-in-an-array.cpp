class Solution {
public:
    
    bool solve(int n1 , int n2)
    {
        
        int maxi = -1;
        int maxi2 =-1 ;
        int rem = 0;
        while(n1>0)
        {
            rem = n1%10;
            maxi = max(rem, maxi);
            n1/=10;
        }
        
        rem = 0;
        
        while(n2>0)
        {
            rem = n2%10;
            maxi2 = max(rem, maxi2);
            n2/=10;
        }
        
        if(maxi == maxi2)
        {
            return true;
            
        }
        else
             return false;
        
        
    }
    
    int maxSum(vector<int>& nums) {
        
        int maxi = INT_MIN;
            for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(solve(nums[i] ,  nums[j]))
                {
                    int sum = nums[i] + nums[j];
                    cout<<"SUM" << sum <<endl; 
                    maxi = max(maxi, sum);
                    
                }
            }
        }
        
        return maxi == INT_MIN ? -1 : maxi;
        
    }
};