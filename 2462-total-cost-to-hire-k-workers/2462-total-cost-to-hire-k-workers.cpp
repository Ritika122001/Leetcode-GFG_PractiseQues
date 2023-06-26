class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) 
    {
        priority_queue<int,vector<int>,greater<int>> pq1; 
        priority_queue<int,vector<int>,greater<int>> pq2; 
        
        int i =0 ;
        int j = costs.size()-1;
        int hire =0 ;
        long long ans=0;
        
        while(hire<k)
        {
            
            while(pq1.size() < candidates and i<=j)
            {
                pq1.push(costs[i]);
                i++;
            }
            
            
           while(pq2.size() < candidates and j>=i)
            {
                pq2.push(costs[j]);
                j--;
            }
            
            int mini = pq1.size()>0 ? pq1.top() : INT_MAX;
            int minii = pq2.size()>0 ? pq2.top() : INT_MAX;
            
            if(mini <= minii)
            {
                ans+=mini;
                pq1.pop();
                
            }
            
            else
            {
                ans+=minii;
                pq2.pop();
            }
            
            hire++;
        }
        
        return ans;

        
    }
};