class Solution {
public:
    
    int solve(string s , int i , vector<int>&memo)
    {
        
        if(i==s.length())
        {
            return 1;
        }
        
         if(s[i] == '0')
        {
            return 0;
        }
        
        
        if(i == s.length()-1)
        {
            return 1;
        }
        

        
        if(memo[i]!=-1)
        {
            return memo[i];
            
        }

        int way = solve(s,i+1,memo);
        
        int way2=0;
        
        if(s.substr(i,2)<="26")
        {
            way2 = solve(s,i+2,memo);
        }
        
        return memo[i] =way+way2;
        
            
    }

    
    int numDecodings(string s) {
        vector<int>memo(s.length()+1 ,-1);
        return solve(s,0,memo );
        
    }
};