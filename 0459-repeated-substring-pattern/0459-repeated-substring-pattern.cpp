class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
       int n = s.length();
    
    if (n < 2) {
        return false;
    }
    
    for (int l = 1; l <= n/2; ++l) {
        if (n % l== 0) {
            string sub_str = s.substr(0, l);
            string reconstructed_str = "";
            for (int j = 0; j < n/l; ++j) {
                reconstructed_str += sub_str;
            }
            if (reconstructed_str == s) {
                return true;
            }
        }
    }
    
    return false;

        
    }
};