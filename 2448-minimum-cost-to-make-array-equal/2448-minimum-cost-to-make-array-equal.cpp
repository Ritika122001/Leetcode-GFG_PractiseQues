class Solution {
    
    private:
     typedef long long ll;

   ll findCost(vector<int>& nums, vector<int>& cost,int target)
   {
       ll foundCost=0;
       for(int i=0;i<nums.size();i++)
       {
           foundCost+=(ll)abs(nums[i]-target)*cost[i];
       }

       return foundCost;

   }
    
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        
        ll ans=INT_MAX;
        int start=*min_element(nums.begin(),nums.end());
        int end=*max_element(nums.begin(),nums.end());

        while(start<=end)
        {
            int mid=start+(end-start)/2;

            ll cost1=findCost(nums,cost,mid);
            ll cost2=findCost(nums,cost,mid+1);
      
            ans=min(cost1,cost2);

            if(cost2>cost1)
              end=mid-1;
              else
               start=mid+1;
           

        }
        if(ans==INT_MAX)
             return 0;
             else
              return ans;
        
        
    }
};