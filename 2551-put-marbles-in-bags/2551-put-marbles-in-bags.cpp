class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
               int n = weights.size();
        if(k>=n){return 0;}
        vector<int> pairSum(n-1);
        for(int i=0; i< n-1; i++){
            pairSum[i]= weights[i]+weights[i+1];
        }
        sort(pairSum.begin(), pairSum.end());
        long long minSum =0, maxSum =0;
        for(int i=0; i<k-1 ; i++){
            minSum+= pairSum[i];
            maxSum+= pairSum[n-i-2];
            cout<< pairSum[i]<<endl;
        }
        return maxSum - minSum;
    }
};