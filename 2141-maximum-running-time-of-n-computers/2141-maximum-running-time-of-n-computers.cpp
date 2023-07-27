class Solution {
public:
    
    bool ispossible(long mid , int n, vector<int>&batteries)
    {
        
        long duration=0;
        for(int i : batteries)
        {
            if(i<mid)
            {
                duration+=i;
            }
            else
            {
                duration+=mid;
            }
            
        }
        
        return duration >= n*mid ? true : false;
        
        
        
    }
    
    long long maxRunTime(int n, vector<int>& batteries) {
        
        long sum=0;
        for(int i : batteries)
        {
            sum+=i;
        }

        long ans=0;
        
        long l = 0;
        long h = sum;
        
        while(l<=h)
        {
            long mid = (l+h)/2;
            if(ispossible(mid,n,batteries))
            {
                ans = mid;
                l = mid+1;
            }
            
            else
            {
                h = mid-1;
            }
        }
        
        return ans;
        
    }
};