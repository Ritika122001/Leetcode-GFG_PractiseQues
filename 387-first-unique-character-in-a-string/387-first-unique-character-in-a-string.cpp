class Solution {
public:
    int firstUniqChar(string s) {
        
        // 1st Approach
//         vector<int>res(26,0);
        
        
//         for(int i=0;i<s.length();i++)
//         {
            
//             res[s[i]-'a']++;
            
            
//         }
        
//         for(int i=0;i<s.length();i++)
//         {
//             if(res[s[i]-'a']==1)
//             {
//                 return i;
                
//             }
//         }
        
//         return -1;
        
        
        
//         2nd Approach
        
        unordered_map<char,pair<int,int>>mp;
        
        for(int i=0;i<s.length();i++)
        {
            
         mp[s[i]].first++;
        mp[s[i]].second= i;
            
            
        }
        
        
        int ind=s.length();
        
        for(auto [c,m] : mp)
        {
            
            if(m.first==1)
            {
                ind = min(ind,m.second);
            }
            
            
        }
        
        return ind ==s.length() ? -1 : ind;
        
        
        
        
        
        
        
    }
};