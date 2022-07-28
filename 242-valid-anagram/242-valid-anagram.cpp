class Solution {
public:
    bool isAnagram(string s, string t) {
        
        
        map<char,int>mp1;
        map<char,int>mp2;
        
        
        for(int i=0;i<s.length();i++)
        {
            mp1[s[i]]++;
        }
        
        
        for(int i=0;i<t.length();i++)
        {
            mp2[t[i]]++;
        }
        
        
//         for(auto c:mp1)
//         {
//             cout<<c.first<<" "<<c.second<<endl;
//         }
        
//         cout<<"Next ,Map"<<endl;
        
//         for(auto c : mp2)
//         {
//             cout<<c.first<<" "<<c.second<<endl;
//         }
        
        return mp1==mp2 ? true :false;
        
//         bool flag=false;
//         return flag;
        
//         for(auto c: mp1)
//         {
//             for(auto s : mp2)
//             {
//                 if(c.first==s.first and c.second==s.second)
//                 {
//                     flag=true;
                    
//                 }
                
//             }
//         }
        
        
//         return flag;
  
        
        
        
        
    }
};