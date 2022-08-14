class Solution {
public:

        
        unordered_map<string,int> depth;
    vector<vector<string>> ans;
    vector<string> path;
    string beg;
    void dfs(string end)
    {
        path.push_back(end);
        if(end==beg)
        {
            vector<string> tmp=path;
            reverse(tmp.begin(),tmp.end());
            ans.push_back(tmp);
            path.pop_back();
            return;
        }
        int curdepth=depth[end];
        for(int i=0;i<end.size();i++)
        {
            char future=end[i];
            for(auto c='a';c<='z';c++)
            {
                end[i]=c;
                if(depth.count(end)&& depth[end]==curdepth-1)dfs(end);
            }
            end[i]=future;
        }
        path.pop_back();
        
        
    }
    
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
      //Step 1
      unordered_set<string>list(wordList.begin(),wordList.end());
      depth[beginWord]=0;
      beg=beginWord;
     queue<string> q; q.push(beginWord);
       
      while(!q.empty())
      {
          int len=q.size();
          while(len--)
          {
              string cur=q.front(); q.pop();
              string tmp=cur;
              for(int i=0;i<cur.size();i++)
              {
                  for(auto c='a';c<='z';c++)
                  {
                      tmp[i]=c;
                      if(list.count(tmp) && !depth.count(tmp))
                      {
                          depth[tmp]=depth[cur]+1;
                          q.push(tmp);
                      }
                  }
                  tmp[i]=cur[i];
              }
          }
      }
      
      if(depth.count(endWord)){
          dfs(endWord);
      }
        return ans;
        
    }
        
    // }
    
};