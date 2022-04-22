class Solution {
public:
    string removeDuplicates(string s, int k) {
        
      
      stack<pair<int,int>>st;
      
      for(int i=0;i<s.length();i++)
      {
         
        
        if(st.empty())
        {
          st.push({s[i],1});
        }
        
        else{
          
          if(!st.empty() and st.top().first==s[i])
          {
            ++st.top().second;
            if(st.top().second==k)
            {
              st.pop();
            }
            
          }
          else{
            st.push({s[i],1});
          }
          
        }
      
      }
      
      
      string ans;
        while(!st.empty())
        {
            for(int i = 0; i < st.top().second; i++)
                ans.push_back(st.top().first);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
      
      
      
      
    }
};