class Solution {
public:
    bool backspaceCompare(string s, string t) {
      
      stack<char>st1;
      stack<char>st2;
      string res1="";
      string res2="";
      
      for(int i=0;i<s.length();i++)
      {
        if(s[i]=='#' and !st1.empty())
        {
              st1.pop();
            
        }
      else if(s[i]!='#')
          st1.push(s[i]);
      
    
        
        
      }
      
      while(!st1.empty())
      {
        res1+=st1.top();
        st1.pop();
        
        
      }
      
      cout<<res1<<" "<<endl;
      
      
       for(int i=0;i<t.length();i++)
      {
      if(t[i]=='#' and !st2.empty())
        {
              st2.pop();
            
        }
      else if(t[i]!='#')
          st2.push(t[i]);
      
        
        
      }
      
      while(!st2.empty())
      {
        res2+=st2.top();
        st2.pop();
        
        
        
        
      }
      
      
      cout<<res2<<" "<<endl;
      if(res1==res2)
      {
        return true;
      }
      
      return false;
        
    }
};