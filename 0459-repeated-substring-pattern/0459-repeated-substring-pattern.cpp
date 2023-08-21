class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        
       int n = s.length();
    
    if (n < 2) {
        return false;
    }
    
    for (int i = 1; i <= n/2; ++i) {
        if (n % i == 0) {
            string sub_str = s.substr(0, i);
            string reconstructed_str = "";
            for (int j = 0; j < n/i; ++j) {
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