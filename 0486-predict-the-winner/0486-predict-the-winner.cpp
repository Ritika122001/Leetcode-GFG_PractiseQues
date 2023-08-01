class Solution {
public:
    int n;
    vector<vector<int>>t;
    int solve(int i,int j,vector<int>& nums){
        if(i>j){
            return 0;
        }
        if(i==j){
            return nums[j];
        }
        if(t[i][j]!=-1){
            return t[i][j];
        }

        int take_i=nums[i]-solve(i+1,j,nums);
        int take_j=nums[j]-+solve(i,j-1,nums);

        return t[i][j]=max(take_i,take_j);
    }

    bool PredictTheWinner(vector<int>& nums) {
        n=nums.size();
        t.resize(23,vector<int>(23,-1));
        return solve(0,n-1,nums)>=0;
    }
};