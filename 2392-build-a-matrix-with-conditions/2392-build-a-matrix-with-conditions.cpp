class Solution {
public:
    
    vector<int>kahn(vector<vector<int>>conditions , int k)
    {
        vector<int>degree(k+1,0);
        queue<int>q;
        vector<int>vec;
        
       
        vector<int>adj[k+1];
        
        for(auto c: conditions)
        {
            adj[c[0]].push_back(c[1]);
            degree[c[1]]++;
        }
        
        for(int i=1;i<k;i++)
        {
            if(degree[i]==0)
            {
                q.push(i);
            }
        }
        
        
        while(!q.empty())
        {
            
            int x = q.front();
            q.pop();
            vec.push_back(x);
            
            for(auto c : adj[x])
            {
                degree[c]--;
                if(degree[c]==0)
                {
                    q.push(c);
                }
            }
        
            
        }
        
        return vec;

        
    }
    
    
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) 
    {
        
        
        vector<vector<int>>ans(k, vector<int>(k,0));
         vector<int>row = kahn(rowConditions,k+1);
         vector<int>col = kahn(colConditions,k+1);
        
        if(row.size()<k || col.size() <k)return  {};

        
         unordered_map<int,int>mp;
        
        for(int i=0;i<k;i++)
        {
            mp[col[i]] = i;
        }
        
        
        for(int i=0;i<k;i++)
        {
            
            ans[i][mp[row[i]]] = row[i];
        }
        
        return ans;
        
        
    }
};