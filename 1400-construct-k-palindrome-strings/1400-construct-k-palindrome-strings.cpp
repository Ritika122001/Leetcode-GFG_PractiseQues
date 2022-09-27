class Solution {
    
    
//     a->2
  // n->2
      // b->1
      // e->2
      // l->2
public:

    
    
    bool canConstruct(string s, int k) {
        
        if(s.size() < k)
        {
            return false;
        }
        
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;    
        
        }

        // int cut=k-1;
        
        int ans=0;
        
        for(auto c : mp)
        {
         
            //can form even or odd one
            if(c.second%2==1)
            {
                
                ans++;
                
            }
          
        }
        
        if(ans>k)
        {
            return false;
        }
        
        return true;
        
        
    }
};