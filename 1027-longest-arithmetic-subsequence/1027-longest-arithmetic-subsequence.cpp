class Solution {
public:
    int longestArithSeqLength(vector<int>& nums) 
    {
        int n = nums.size();
        if (n == 2) return 2;
        vector<vector<int>> seq(n, vector<int>(1002, 1));
        int ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < i; j++) {
                //Using constraint  0 <= nums[i] <= 500
                int dif = nums[i] - nums[j] + 501;
                seq[i][dif] = seq[j][dif] + 1;

                ans = max(ans, seq[i][dif]);
            }
        }
        return ans;

        
    }
};