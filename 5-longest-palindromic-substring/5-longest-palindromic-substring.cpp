class Solution {
    
public:
    
    int expand(string &s, int i , int j)
    {
        
        
        while(i>=0 and j<s.length() and s[i]==s[j])
        {
            i--;
            j++;
        }
        
        return j-i-1;
        
        
        
    }
    
     string longestPalindrome(string s) {
         
         
         int start;
         int maxilen =0;
         
         for(int i=0;i<s.length();i++)
         {
             int evenlen = expand(s,i,i+1);
             int oddlen = expand(s,i,i);
             int len = max(evenlen , oddlen);
             if(maxilen < len)
             {
                 maxilen = len;
                 start = i - (len-1)/2;
             }
             
             
             
             
         }
         
         
         return s.substr(start,maxilen);
         
         
     }
   
    
    
    //do lcs of both string : - string itself and reverse of it
    
//     string longestPalindrome(string s) {
//                 int fStart; 
//         int n = s.length();
//         string r = s;
//         reverse(r.begin(), r.end());
//         vector<vector<int>>dp(n+1,vector<int>(n+1));
         
//         int mini=INT_MIN;
//         string ans;
        
//         for(int i=0;i<=n;i++)
//         {
//             for(int j=0;j<=n;j++)
//             {
//                 if(i==0 || j==0)
//                 {
//                     dp[i][j]=0;
//                 }
                
//                 else if(s[i-1]==r[j-1])
//                 {
                    
//                     dp[i][j] = 1  + dp[i-1][j-1];
                    
// //                     if(dp[i][j]>mini)
// //                     {
// //                         string temp = s.substr(i-dp[i][j], dp[i][j]);
// //                          string res = string(temp.rbegin(),temp.rend());
// //                         if(res==temp)
// //                         {
// //                             mini = dp[i][j] ;
// //                             ans = temp ;
// //                         }
// //                     }
                    
//                 }
                
//                 else
//                 {
//                     dp[i][j] =0;
//                 }
                
//                 if(dp[i][j] > mini)
//                 {
                    
//                     int start = (i-1)-dp[i][j] + 1;
//                      int rstart = (j-1)-dp[i][j] + 1;
//                     int cstart = (n-1) - rstart;
//                     if(cstart == (i-1) && (n-1)-(j-1) ==start)
//                     {
//                         mini = dp[i][j];
//                         fStart = (i-1)-dp[i][j] + 1;
//                     }          
//                 }
                
                  
//             }
//         }
        
//             return s.substr(fStart,mini);
//     }
    

    
// //         lcs(s,r ,dp,n);
        
        
// //         int i = n;
// //         int j = n;
// // string ans;
        
// //         while(i>0 and j>0)
// //         {
// //             if(s[i-1]==r[j-1])
// //             {
// //                 ans.push_back(s[i-1]);
// //                 i--;
// //                 j--;
                
// //             }
            
// //             else {
                 
// //                 if(s[i][j-1]  > s[i-1][j])
// //                 {
// //                     j--;
// //                 }
                
// //                 else
// //                     i--;
                
// //             }
// //         }
        
// //         return ans;
        
        
};