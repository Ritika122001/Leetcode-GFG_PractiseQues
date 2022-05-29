class Solution {
public:
    
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
        vector<int>degree(n,0);
        
       for(int c=0;c<roads.size();c++)
       {
           degree[ roads[c][0] ]++;
           degree[ roads[c][1] ]++;
           
       }
        
        sort(degree.begin(),degree.end());
        
        
        long long ans = 0;
        
        int curr = n;
        
        for(int i=n-1;i>=0;i--)
        {
            ans+= ((long long) degree[i] * curr) ;
            curr--;
        }
        
        return ans;
        
    }
};