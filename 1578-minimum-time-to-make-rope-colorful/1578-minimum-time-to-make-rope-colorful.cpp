class Solution {
public:
    
//     int solve(string colors,  vector<int>&neededTime , int n , vector<int>&memo)
//     {
        
//         if(n<=0)
//         {
//             return 0;
//         }
        
//         if(memo[n]!=-1)
//         {
//             return memo[n];
//         }
        
        
//         if(colors[n]==colors[n-1])
//         {
//             if(neededTime[n-1]<neededTime[n]){
//                 int temp=neededTime[n-1];
//                 neededTime[n-1]=neededTime[n];
//                 neededTime[n]=temp;
//             }
            
            
//            return memo[n] = min(neededTime[n],neededTime[n-1]) + solve(colors,neededTime, n-1,memo);
//         }
        
//         else        
//            return memo[n] = solve(colors,neededTime,n-1,memo);

        
//     }
    
    int minCost(string colors, vector<int>& neededTime) {
        stack<pair<char,int>>st;
        
int sum=0;
        for(int i=0;i<colors.size();i++)
        {
            if(st.empty())
            {
                st.push({colors[i],neededTime[i]});
            }
            
            else if(st.top().first == colors[i])
            {
                if(st.top().second<neededTime[i])
                {
                    sum+=st.top().second;
                    st.pop();
                    st.push({colors[i], neededTime[i]});
                    
                }
                
                else{
                    sum+=neededTime[i];
                }
                
            }
            
            else{
                st.push({colors[i] , neededTime[i]});
            }
            
            
        }
        
        return sum;
        
        
        // vector<int>memo(colors.size()+1,-1);
        // return solve(colors,neededTime,colors.size()-1,memo);
        
    }
};