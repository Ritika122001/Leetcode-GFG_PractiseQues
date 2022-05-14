class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        vector<int>costs(n+1,INT_MAX);
        
        vector<vector<pair<int,int>>>adj(n+1);
        
        for(auto i:times)
        {
            adj[i[0]].push_back({i[2],i[1]});
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        costs[k]=0;
        
        pq.push({0,k});
        
        while(pq.size() > 0)
        {
            pair<int,int> p = pq.top();
            pq.pop();
            
            for(auto i : adj[p.second])
            {
                int x = costs[p.second] + i.first;
                if(costs[i.second] > x)
                {
                    costs[i.second] = x;
                    pq.push({x,i.second});
                }
            }
        }
        
        int time = INT_MIN;
        
        for(int i=1; i<costs.size(); i++)
        {
            time = max(time,costs[i]);
        }
        
        if(time == INT_MAX)
        return -1;
        
        else
        return time;
    }
    
};