class Solution {
public:
    
    bool isvalid(string p)
  {
    int n = p.size();
        if (n >= 2 && p[0] == '0')
            return false;
        if (n >= 4)
            return false;
        return stoi(p, nullptr, 10) <= 255;
        
  }
  
    
    void solve(string s , int i, int part, vector<string>&ans,string res)
    {
        
        if(i==s.length() || part==4)
        {
            
            if(i==s.length() and part==4)
            {
                ans.push_back(res.substr(0,res.length()-1));
            }
            
            
            return;
        }
        
        
        
        solve(s,i+1,part+1,ans,res+s[i]+".");
        if(i+2<=s.length() and isvalid(s.substr(i,2)))
        {
            solve(s,i+2,part+1,ans,res+s.substr(i,2)+".");
        }
        
        
        if(i+3<=s.length() and isvalid(s.substr(i,3)))
        {
            solve(s,i+3,part+1,ans,res+s.substr(i,3)+".");
        }
        
        
        
    }
    
    
    vector<string> restoreIpAddresses(string s) {
        
     vector<string>ans;
        
        solve(s,0,0,ans,"");
        return ans;
        
        
        
        
    }
};