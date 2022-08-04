class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        
        int cnt=0;
 map<int,int>mp;
        mp[0]=1;
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            int remain = sum%k;
            if(remain<0)
            {
                remain+=k;
            }
            
            if(mp.find(remain)!=mp.end())
            {
                cnt+=mp[remain];
                
            }
            mp[remain]++;
            
    }
        
        return cnt;
        
    }
};