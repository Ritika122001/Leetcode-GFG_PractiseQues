class Solution {
public:
  
   int solve(int i, int n, string &vowel, vector<vector<int>>&memo)
   {
     
     if(n==0)
     {
       
       return 1;
      
     }
     
     if(i>=vowel.length())
     {
       return 0;
     }
     
     if(memo[i][n]!=-1)
     {
       return memo[i][n];
     }
     
     int pick = solve(i,n-1,vowel,memo);
     int nopick = solve(i+1,n,vowel,memo);
     return memo[i][n] = pick+nopick;
     
     
   }
  
  
  
    int countVowelStrings(int n) {
      
      string vowel = "aeiou";
       vector<vector<int>>memo(5, vector<int>(n+1, -1));
      return solve(0,n,vowel,memo);
     
    }
};