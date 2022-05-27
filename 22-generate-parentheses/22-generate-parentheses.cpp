class Solution {
public:
    
    
    void solve(string &s, int open , int close, vector<string>&res)
    {
        
        
        if(open==0 and close==0)
        {
            res.push_back(s);
            return ;
        }
        
        
        if(open>0)
        {
            s.push_back('(');
            solve(s,open-1,close,res);
            s.pop_back();
        }
        
        if(close>0)
        {
            
            
            if(open < close)
            {
                s.push_back(')');
                solve(s,open,close-1,res);
                s.pop_back();
            }
            
            
            
        }
        
        
        
        
    }
    
    
    
    vector<string> generateParenthesis(int n) {
        
     
        vector<string>res;
        string s;
        solve(s,n,n,res);
        return res;
        
    }
};