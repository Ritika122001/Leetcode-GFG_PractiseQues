class Solution {
public:
    
    int solve(vector<vector<int>>& graph)
    {
        int n = graph.size();
        int all = (1<<n)-1;
     
        queue<pair<int,pair<int,int>>>q;
        set<pair<int,int>>st;
        for(int i=0;i<graph.size();i++)
        {
            int mask = (1<<i);
            q.push({i,{0,mask}});
            st.insert({i,mask});
        }
        
        
        while(!q.empty())
        {
            
            auto node = q.front();
            q.pop();
            
            int val = node.first;
            int dist = node.second.first;
            int mask = node.second.second;
            for(auto temp : graph[val])
            {
                int newmask = (mask | (1<<temp));
                if(newmask==all)
                {
                    return dist+1;
                }
                else if(st.count({temp,newmask}))
                {
                    continue;
                }
                
                q.push({temp,{dist+1,newmask}});
                st.insert({temp,newmask});
                
                
                
            }
            
            
            
        }
        return 0;
        
        
        
        
    }
    
    
    int shortestPathLength(vector<vector<int>>& graph) {
        if(graph.size()==1) return 0;
        
        return solve(graph);

        
    }
};