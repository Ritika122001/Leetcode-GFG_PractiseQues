class Solution {
public:
    vector<vector<vector<double>>> dp;

    double solve(int n, int k, int r, int c) {
        if(r < 0 || r >= n || c < 0 || c >= n) return 0;

        if(k == 0) return 1.0;

        if(dp[r][c][k] != -1) return dp[r][c][k];

        return dp[r][c][k] = (solve(n, k-1, r-1, c-2) + solve(n, k-1, r-2, c-1) + solve(n, k-1, r-1, c+2) + solve(n, k-1, r-2, c+1) + solve(n, k-1, r+1, c-2) + solve(n, k-1, r+2, c-1) + solve(n, k-1, r+1, c+2) + solve(n, k-1, r+2, c+1)) / 8.0;
    }

    double knightProbability(int n, int k, int row, int column) { 
        if(k == 0) return 1.0;
        if(n < 3) return 0.0;
        
        dp.resize(n, vector<vector<double>> (n, vector<double> (k+1,-1)));

        return solve(n, k, row, column);
    }
};
