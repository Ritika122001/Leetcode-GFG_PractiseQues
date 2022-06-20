class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        
        //create map of suffix of words
    set<string>s1(words.begin() , words.end());
        set<string>s2(words.begin() , words.end());
        
        
        for(auto c :  s1)
        {
            
            for(int i=1;i<c.size();i++)
            {
                string res = c.substr(i);
                s2.erase(res);
            }
            
        }
        
        int sum=0;
        
        for(auto r:s2)
        {
            
            sum+=r.length()+1;;
            
        }
        
        return sum;
        
        
        
    }
};