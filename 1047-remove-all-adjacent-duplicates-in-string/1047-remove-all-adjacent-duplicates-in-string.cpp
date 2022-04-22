class Solution {
public:
    string removeDuplicates(string s) {
       
      stack<char>st;
      
      string ans="";
      int n = s.length();
      
     for(int i=0;i<n;i++)
      {
       
        if(st.empty())
        {
          st.push(s[i]);
        }
       
       else{
         
          
        if(s[i]==st.top())
        {
          st.pop();
          // i++;
        }
       
      else  st.push(s[i]);
         
       }
       
        
        
      }
      
      while(!st.empty())
      {
        ans+=st.top();
        st.pop();
        
      }
      
      reverse(ans.begin(),ans.end());
      return ans;
    }
};