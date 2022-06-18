class WordFilter {
public:
    // vector<string>ans;
    unordered_map<string,int>mp;
    
    WordFilter(vector<string>& words) {
        
        // ans=words;
        
        for(int i=0;i<words.size();i++)
        { 
            string res = words[i];
            
            for(int j=1;j<=res.length();j++)
            {
                
               string p = res.substr(0,j);
                for(int k = words[i].size() - 1;k >=0;k--)
                {
                  string s = res.substr(k);
                 mp[p + "&" + s] = i+1;
                }
             
                
            }
            
        }
    
        
    }
    
    int f(string prefix, string suffix) {
        
        
        string ans= prefix + "&" + suffix;
        return mp[ans]-1;
        
//         int idx=-1;
        
//         for(int i=0;i<ans.size();i++)
//         {
            
//             string res = ans[i];
//             int len1 =  prefix.length();
//             int len2 = suffix.length();
//             string start = res.substr(0,len1);
//             // reverse(res.begin() , res.end());
//             string end = res.substr(res.size()-len2);
//             // reverse(suffix.begin() , suffix.end());
            
//             if(start.compare(prefix)==0 and end.compare(suffix)==0)
//             {
//                 idx=i;
//             }
//         }
        
//        return idx;
        
        
        
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */