class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mini = INT_MAX;
        int maxi = 0;
        
        for(int i=0;i<prices.size();i++)
        {
            if(mini > prices[i])
            {
                mini = prices[i];
                
            }
            
             maxi = max(maxi, prices[i]-mini);

        }
        
        return maxi;
      
        
        
    }
};