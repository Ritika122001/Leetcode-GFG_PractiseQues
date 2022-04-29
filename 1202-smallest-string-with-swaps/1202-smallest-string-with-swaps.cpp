class Solution {
public:
  
 void dfs(int i , vector<vector<int>>& adj, string &s, vector<bool>&vis, vector<char>&letter, vector<int>&index)
      
  {
    
    vis[i]=true;
    index.push_back(i);
    letter.push_back(s[i]);
    
    for(auto c : adj[i])
    {
      if(!vis[c])
      {
        dfs(c,adj,s,vis,letter,index);
      
    }
    }
    
  
    
    
  }
  
   
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
      
      int V = s.size();
      vector<vector<int>> adj(V);
     
        for(auto p: pairs) {
            adj[p[0]].push_back(p[1]);
            adj[p[1]].push_back(p[0]);
        }
      
      vector<bool>vis(V,false);
      for(int i=0;i<V;i++)
      {
         vector<int>index;
      vector<char>letter;
        if(!vis[i])
        {
         
          dfs(i,adj,s,vis,letter,index); 
        }
        
        
        sort(letter.begin(),letter.end());
        sort(index.begin(),index.end());
        
         
      //   for(int i=0;i<letter.size();i++)
      // {
      //    cout<<letter[i];
      // }
      //   cout<<endl;
          
      for(int i=0;i<index.size();i++)
      {
        s[index[i]]=letter[i];
      }
      
      }
      
    
      return s;
      
      
    }
};