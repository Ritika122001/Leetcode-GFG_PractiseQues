class Solution {
public:
  typedef long long ll;
    int minimumAverageDifference(vector<int>& nums) {
      
      ll ans=INT_MAX;
      ll ind;
      vector<ll>a(nums.size(),0);
      vector<ll>b(nums.size(),0);
      
      a[0] = nums[0];
      
      for(int i=1;i<nums.size();i++)
      {
        a[i] = a[i-1]+nums[i];
      }
        
      b[nums.size()-1] = 0;
      
      
      for(int i=nums.size()-2;i>=0;i--)
      {
        b[i] = b[i+1]+nums[i+1];
      }
      
      
      for(int i=0;i<nums.size();i++)
      {
         
       ll  avg1 = a[i]/(i+1);
        ll avg2=0;
        if(nums.size()-i-1>0)
            avg2 = b[i]/(nums.size()-i-1);
        
         ll temp =  abs(avg1-avg2);
          if(temp < ans)
          {
            ans=temp;
            ind=i;
            
          }
        
        
      }
      
      return ind;
    }
};