class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
         vector<pair<int,int>> vec;
        for(int i=0;i<n;i++){
            vec.push_back({efficiency[i],speed[i]});
        }
        sort(vec.begin(),vec.end());
        long ans=0;
        long sum=0;
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=n-1;i>=0;i--){
            sum+=vec[i].second;
            pq.push(vec[i].second);
            if(pq.size()>k){
                sum-=pq.top();
                pq.pop();
            }
            ans=max(ans,sum*vec[i].first);
        }
        return ans%1000000007;
    }
};