class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        
        priority_queue<pair<int, int>>pq1;
        priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>>pq2;
        int i=0;
        int j=0;
        int len=INT_MIN;
        
            while(j<nums.size())
            {
                
              pq1.push({nums[j],j});
              pq2.push({nums[j],j});
            
                
            while(pq1.top().second < i)
                    pq1.pop();
            
            while(pq2.top().second < i)
                    pq2.pop();

            
                
              if( abs(pq1.top().first - pq2.top().first) <=limit)
              {      
                  len = max(len , j-i+1);
                  j++;
              }
                else{
                    
                    i++;
                    j++;
                }
                
              
                
            }
        
        return len;
    }
};