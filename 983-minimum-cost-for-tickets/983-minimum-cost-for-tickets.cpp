class Solution {
public:
    int dp[366];
    
    
    int solve(vector<int>& days, vector<int>& costs, int i)
    {
        
        
        if(i>=days.size())
        {
            return 0;
        }
        
        
        if(dp[i]!=-1) return dp[i];
        
        
        int s1 = costs[0] + solve(days,costs,i+1);
        
        
        int k = i; 
        
        for (;k<days.size();k++)
        {
            
            if(days[k] >= days[i]+7)
            {
                break;
            }
            
        }
        
        
        int s2 = costs[1] + solve(days,costs,k);
        
        for(;k<days.size();k++){
            if(days[k]>=days[i]+30){
                break;
            }
        }
        int s3=costs[2]+ solve(days,costs,k);
        
        
        return dp[i]=min(s1,min(s2,s3));
        
        
        
        
        
    }
    
    
    
    
    
    
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        
        memset(dp,-1,sizeof dp);
        return solve(days,costs,0);
    }
};