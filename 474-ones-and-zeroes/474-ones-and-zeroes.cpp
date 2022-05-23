class Solution {
public:
     
    int check(string s)
    {
        
        int cnt=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
        }
        
        return cnt;
        
        
    }
    
    int solve(vector<string>&strs, int m , int n, int i , vector<vector<vector<int>>>&memo)
    {
        
        if(i>=strs.size() || ( m+n==0) || (m<0 ||n<0))
        {
            return 0;
        }
        
        
        if(memo[i][m][n]!=-1)
        {
            return memo[i][m][n];
            
        }
        
        
        int skip = solve(strs,m,n,i+1,memo);
        int pick=0;
         
        int cntzero =  check(strs[i]);
        int cntone = strs[i].length() - cntzero;
        
        
        if(m>=cntzero and n>=cntone)
        {            
            pick = 1 + solve(strs,m-cntzero,n-cntone,i+1,memo);
            
        }
        
        return memo[i][m][n]=max(pick,skip);
            
        }
           
    
        
        
    
    

    int findMaxForm(vector<string>& strs, int m, int n) {
        
       vector<vector< vector<int> > > memo(strs.size()+1,vector<vector<int>>(m+1,vector<int>(n+1,-1)));
      return  solve(strs,m,n,0,memo);
        
    }
};