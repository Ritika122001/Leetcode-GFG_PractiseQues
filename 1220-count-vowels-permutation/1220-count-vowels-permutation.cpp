class Solution {
public:
    map<char,int> mp{{'a',0},{'e',1},{'i',2},{'o',3},{'u',4}};
    int MOD= 1e9+7;
    int dp[5][20001];
    
    int permute(char s,int n){
        if(n==0){
            return 1;
        }
        
        if(dp[mp[s]][n]!=-1){
            return dp[mp[s]][n]%MOD;
        }
        
        if(s=='a'){
           return dp[0][n]= permute('e',n-1)%MOD;
        }
        
        else if(s=='e'){
          return dp[1][n]= (permute('a',n-1)+permute('i',n-1)%MOD)%MOD;
        }
        
        
        else if(s=='i'){
          return dp[2][n]= ((permute('a',n-1)+permute('e',n-1)%MOD)%MOD+(permute('o',n-1)%MOD+permute('u',n-1))%MOD)%MOD;
        }
        
        else if(s=='o'){
          return dp[3][n]= (permute('i',n-1)%MOD+permute('u',n-1))%MOD;
        }
        
        
        else{
          return dp[4][n]= permute('a',n-1)%MOD;
        }
        
        return 0;
    }
    
    int countVowelPermutation(int n) {
        
     memset(dp,-1,sizeof(dp));
       return (((permute('a',n-1)%MOD+permute('e',n-1)%MOD)%MOD+(permute('i',n-1)%MOD+permute('o',n-1)%MOD)%MOD)%MOD+permute('u',n-1)%MOD)%MOD;
    }
};