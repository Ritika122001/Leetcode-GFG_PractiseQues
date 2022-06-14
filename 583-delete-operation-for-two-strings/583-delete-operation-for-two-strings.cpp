class Solution {
public:
int helper(string word1,string word2,int n,int m)
{

    int dp[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 || j==0)dp[i][j]=0;
            else if(word1[i-1]==word2[j-1])dp[i][j]=dp[i-1][j-1]+1;
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    int lcs = dp[n][m];
	return (n + m) - (2*lcs); 
}
int minDistance(string word1, string word2) {

        int n=word1.size();
     int m=word2.size();
     return helper(word1,word2,n,m);
}
};