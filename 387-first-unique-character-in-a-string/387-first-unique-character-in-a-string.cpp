class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int>res(26,0);
        
        
        for(int i=0;i<s.length();i++)
        {
            
            res[s[i]-'a']++;
            
            
        }
        
        for(int i=0;i<s.length();i++)
        {
            if(res[s[i]-'a']==1)
            {
                return i;
                
            }
        }
        
        return -1;
        
        
    }
};