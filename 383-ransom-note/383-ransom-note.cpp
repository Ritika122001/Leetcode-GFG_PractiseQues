class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
      
        unordered_map<char,int>mp;
        unordered_map<char,int>mp1;
        
        for(auto c: magazine)
        {
            mp[c]++;
            
        }
        
        
        for(auto c : ransomNote)
        {
            mp1[c]++;
            
        }
          
        for(int i=0;i<ransomNote.size();i++)
        {
            if(mp1.find(ransomNote[i])!=mp1.end()) 
            {
                if(mp1[ransomNote[i]] > mp[ransomNote[i]])
                {
                    return false;
                    break;
                }
                
            }

        }
        
        return true;
        
        
    }
};