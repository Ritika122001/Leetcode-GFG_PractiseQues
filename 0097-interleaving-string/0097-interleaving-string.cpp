class Solution {
public:
    bool solve(string &s1, string &s2, string &s3,int ind1,int ind2,vector<vector<int>>&memo)
{
        
        if(ind1+ind2==s3.size()) return 1;
        if(memo[ind1][ind2]!=-1) return memo[ind1][ind2];
        bool ans=0;        
        if(ind1<s1.size() && s1[ind1]==s3[ind1+ind2]) 
        ans=(ans | solve(s1,s2,s3,ind1+1,ind2,memo));
        if(ind2<s2.size() && s2[ind2]==s3[ind1+ind2])
        ans=(ans | solve(s1,s2,s3,ind1,ind2+1,memo));
        return memo[ind1][ind2]=ans;
        
}
    bool isInterleave(string s1, string s2, string s3) 
    {
        
        if(s1.size()+s2.size()!=s3.size()) return false;
        vector<vector<int>>memo(s1.size()+1,vector<int>(s2.size()+1,-1));
        return solve(s1,s2,s3,0,0,memo);
    }
};
