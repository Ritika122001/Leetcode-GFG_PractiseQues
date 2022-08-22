class Solution {
public:
    
    
    void solve(int open , int close, string &s, set<string>&ans, int i , int j, string res)
    {

        if(i==s.length())
        {
            
            if(j==0 and open==0 and close==0)
      
        //     if(isvalid(res))
            // {
                // cout<<res<<" ";
            ans.insert(res);
              
                // res.pop_back();
            return;
                
            // }
           
    
            
        }
       
        
    
        if(s[i]=='(') 
        {
            
            if(open>0)
                 solve(open-1,close,s,ans,i+1,j,res);
            
//       remove kru ya nhi; do option hai
       
        
         // cout<<res<<"";
            solve(open,close,s,ans,i+1,j+1,res+s[i]);
              
            
        }
        
        else if(s[i]==')')
        {
            if(close>0)
              solve(open,close-1,s,ans,i+1,j,res);
         
            if(j>0)
            {
                  solve(open,close,s,ans,i+1,j-1,res+s[i]);
            }
          
            
            
        }
        
     else{
         
         solve(open,close,s,ans,i+1,j,res+s[i]);
     }
    }
    
    vector<string> removeInvalidParentheses(string s) {
        
        int open=0;
        int close=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(') {
                open++;
                
            }
            
            
            else if(s[i]==')')
            {
                if(open<=0) close++;
                else
                   open--;
            }
        }
        
        set<string>ans;
        
        solve(open,close,s,ans,0,0,"");
        
      return vector<string>(ans.begin(),ans.end());

        
    }
};