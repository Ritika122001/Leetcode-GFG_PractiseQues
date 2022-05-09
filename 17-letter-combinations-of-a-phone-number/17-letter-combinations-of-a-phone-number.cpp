class Solution {
public:
      vector<string>mp = {"abc", "def", "ghi","jkl", "mno", "pqrs", "tuv", "wxyz"},res;
       
   
      void solve(string &digits , int index,  string output)
    {
        
        if(index == size(digits))
        {
            res.push_back(output);
            return;
        }
        
        
        for (auto &c : mp[digits[index]-'2'])
        {
          output.push_back(c);
          solve(digits,index+1,output) ;
          output.pop_back();
          
        }
              
             
        
    }
    
    
    
    
    
    
    vector<string> letterCombinations(string digits) {
     
        
       if(digits == "")
       {
           return res;
       }
   
        
        solve(digits, 0 , "");
        return res;
     
    }
    
   
    
    
};