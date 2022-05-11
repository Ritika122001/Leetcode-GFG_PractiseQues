class Solution {
public:
  
   int solve(int i, int n, string &vowel)
   {
     
     if(n==0)
     {
       
       return 1;
      
     }
     
     if(i>=vowel.length())
     {
       return 0;
     }
     
     int pick = solve(i,n-1,vowel);
     int nopick = solve(i+1,n,vowel);
     return pick+nopick;
     
     
   }
  
  
  
    int countVowelStrings(int n) {
      
      string vowel = "aeiou";
      return solve(0,n,vowel);
      
      
        
    }
};