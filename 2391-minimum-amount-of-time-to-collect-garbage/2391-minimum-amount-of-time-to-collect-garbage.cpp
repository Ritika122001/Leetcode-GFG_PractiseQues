class Solution {
public:
 
    
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {

        
        int Gpos =-1;
        int Ppos=-1;
        int Mpos=-1;
        int Gfreq=0;
        int Pfreq=0;
        int Mfreq=0;
        int ans=0;
        
        for(int i=0;i<garbage.size();i++)
        {
            string s = garbage[i];
            
            for(int j=0;j<s.length();j++)
            {
                if(s[j] == 'G')
                {
                    Gpos = i;
                    Gfreq++;
                    
                }
                
                else if(s[j]=='P')
                {
                    Ppos=i;
                    Pfreq++;
                }
                
                else if (s[j]=='M')
                {
                    Mpos=i;
                    Mfreq++;
                }
            }
            
        }
        
     
             for(int j=0;j<Ppos;j++)
             {
                 ans+=travel[j];
             }
        
    
             for(int j=0;j<Mpos;j++)
             {
                 ans+=travel[j];
             }
      
     
             for(int j=0;j<Gpos;j++)
             {
                 ans+=travel[j];
             }
        
        
        return ans+Gfreq+Pfreq+Mfreq;
        
        
    }
};