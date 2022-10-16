class Solution {
    int helper(vector<int>& jobDifficulty, int d, int si, vector<vector<int>>& dp){
        int n = jobDifficulty.size();
        if (d == 0 && si == n){
            return 0;
        }
        if (d == 0 || si == n){
            return INT_MAX;
        }
        if (dp[si][d] != INT_MAX){
            return dp[si][d];
        }
        
        int difficult = 0;
        int ans = INT_MAX;
        for(int i = si; i<n; i++){
            difficult = max(difficult, jobDifficulty[i]);
            int rest = helper(jobDifficulty, d-1, i+1, dp);
            if (rest != INT_MAX){
                ans = min(ans, difficult + rest);
            }
        }
        dp[si][d] = ans;
        return ans;
    }
public:
    int minDifficulty(vector<int>& jobDifficulty, int d) {
        int n = jobDifficulty.size();
        if (n<d){
            return -1;
        }
        vector<vector<int>> dp(n, vector<int>(d+1, INT_MAX));
        return helper(jobDifficulty, d, 0, dp);
    }
};