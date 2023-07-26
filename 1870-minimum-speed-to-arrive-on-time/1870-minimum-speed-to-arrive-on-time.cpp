class Solution {
public:

    // int solve(int mid, vector<int>&dist)
    // {
    //     double time=0;
    //     for(int i=0;i<dist.size()-1;i++)
    //     {
    //          time=time+ceil(dist[i]/(mid*1.00));
            
    //     }

    //     time=time+(dist[dist.size()-1]/(mid*1.00));
    //     return time;

    // }


    bool solve(vector<int>& dist, double hr, int h) {
        double cnt = 0;
        for(int i = 0; i < dist.size(); i++)
            if(i == dist.size() - 1) cnt += (double) dist[i] / h;
            else cnt += ((dist[i] + h - 1) / h);
        return cnt <= hr;
    }

    int minSpeedOnTime(vector<int>& dist, double hour) 
    {

        int l = 1;
        int h = 1e7;
        int ans=INT_MAX;

        while(l<=h)
        {
            int mid = l + (h-l)/2;
            if(solve(dist,hour,mid))
            {
                ans = min(ans,mid);
                h = mid-1;
                
            }

            else
            {
                l =mid+1;
            }
        }

        if(ans==INT_MAX) return -1;
        return ans;
        
    }
};