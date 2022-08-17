class Solution {
public:
    
      vector<string> morse{".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        
        
    
    
    string solve(string str)
    {
        
        string res="";
        for(auto c : str)
        {
            res+=morse[c-'a'];
            
            
        }
        
        return res;
        
        
    }
    
    int uniqueMorseRepresentations(vector<string>& words) {
 
        
        
       unordered_set<string> st;

        for (auto it : words)
        {
            st.insert(solve(it));
        }
            
        
        return st.size();
        
    }
};