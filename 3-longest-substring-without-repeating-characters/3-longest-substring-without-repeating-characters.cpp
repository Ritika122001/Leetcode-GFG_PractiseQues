class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int len=0;
        int maxi =0;
        while(j<s.length())
        {
            
            if(mp.find(s[j])==mp.end())
            {
                 // mp.insert(s[j++]);
                maxi = max(maxi,j-i+1);
                // mp.insert(s[j++]);
                mp[s[j]]++;
                j++;
                
                
            }
            
            
            else{
                
            
                mp.erase(s[i++]);    
                
            }
            
        }
        
        return maxi;
        
    }
};