class Solution {
public:
    
bool lis(string &s1, string &s2)
    {
        
        int i=0;
        int j=0;
        int differences=0; 
        
        while(i<s1.size() and j<s2.size())
        {   
            
            if(s1[i]==s2[j])
            {
                i++;
                j++;
            }
            
            else{
                
                 differences++;
                if(differences==2){
                    return false;
                }
                
                else{
                    
                    j++;
                }
            }
            
            
        }
        
        return true;

    }
    
    
    
   
//       int lcs( string X,string Y)  
// {  
//     int m = X.length();
//     int n = Y.length();  
//     int L[m + 1][n + 1];  
//     int i, j;  
//     for (i = 0; i <= m; i++)  
//     {  
//         for (j = 0; j <= n; j++)  
//         {  
//         if (i == 0 || j == 0)  
//             L[i][j] = 0;  
      
//         else if (X[i - 1] == Y[j - 1])  
//             L[i][j] = L[i - 1][j - 1] + 1;  
      
//         else
//             L[i][j] = max(L[i - 1][j], L[i][j - 1]);  
//         }  
//     }  
//     return L[m][n];  
// }  
    
    
     static bool cmp(string a,string b){
        return a.size()<b.size();
    }
    
    
    int longestStrChain(vector<string>& words) {
        
        
        vector<int> dp(words.size(),1);
        sort(words.begin(),words.end(),cmp);
        
        for(int i=1;i<words.size();i++)
        {
            string s1 = words[i];
            
            for(int j=0;j<i;j++)
            {
                string s2 = words[j];
                   int m=s1.size();
                int n=s2.size();
                
                
                 if(abs(n-m)>1 || n-m==0){
                    continue;
                }
                 
                if(lis(s2,s1))
                {
                    dp[i] =  max(dp[i], dp[j] + 1);
                    
                }
                
            }
        }
        
          return *max_element(dp.begin(),dp.end());
        
    }
};