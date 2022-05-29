class Solution {
public:
    
    
    int find(string &res)
    {
        
        int cnt=0;
        
        
        for(int i=0;i<res.length();i++)
        {
            if(res[i]==' ')
            {
                  cnt++;
            }
            
          } 
        
        return cnt;
    }
        
    
    
    
    
    
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        
        
       map<string,int>mp;
        // int maxi = INT_MIN;
        
        
        for(int i=0;i<messages.size();i++)
        {
            
             int n = find(messages[i]);
             
             mp[senders[i]]+= n+1;
        }
        
        string ans="";
        int maxi = 0 ;
        
         
        for(auto c : mp)
        {
            
            if(c.second >= maxi)
            {
                  maxi = max(maxi , c.second);
                   ans = max(ans,c.first);
            }
          
            
        }
        
        
        
        
        return ans;
        
   
    }
};