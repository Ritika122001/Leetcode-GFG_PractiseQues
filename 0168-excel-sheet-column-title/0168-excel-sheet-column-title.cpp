class Solution {
public:
    string convertToTitle(int num) 
    {
        string ans = "";
        
        while(num)
        {
            
            int remain =(num-1)%26;
            char c = 'A'+ remain;
            ans = c+ ans;
            num = (num-1)/26;
            
        }
        
        return ans;
        
       
        
        
        
    }
};