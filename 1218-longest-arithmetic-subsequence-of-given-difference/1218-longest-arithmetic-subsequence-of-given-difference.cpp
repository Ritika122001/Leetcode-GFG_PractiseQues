class Solution {
public:
    int longestSubsequence(vector<int>& arr, int diff) {
        unordered_map<int,int> mp;
        int ans=1;
        for(auto x:arr){
            if(mp.count(x-diff)){
                mp[x]=mp[x-diff]+1;
            }
            else{
                mp[x]=1;
            }
            ans=max(ans,mp[x]);
        }
        return ans;

    }
};