class Solution {
public:
    
      
 vector<string>mp = {"abc", "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"},res;
    
    
    void solve(string digits, int i , string op)
    {
        
        if(i==digits.length())
        {
            res.push_back(op);
            return;
        }
        
        
        for(auto c : mp[digits[i]-'2'])
        {
            solve(digits ,i+1 , op+c);
        }
        
        
        
    }
    
    
    
    vector<string> letterCombinations(string digits) 
    {
      
        if(digits=="")
        {
            return res;
        }
        
        solve(digits,0,"");
        return res;
        

        
    }
};