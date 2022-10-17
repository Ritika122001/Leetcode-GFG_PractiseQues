class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        map<char,int>mp;
        for(auto c : sentence)
        {
            mp[c]++;
        }
        
        int cnt=0;
        for(auto c : mp)
        {
            if(c.second>=1)
            {
                cnt++;
            }
        }
        
        
        return cnt==26;
    }
};