class Solution {
public:
   
    
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        
          
        vector<string>vec;
        unordered_map<char,int>f;

         for(auto c: words2)
        {
             
             unordered_map<char,int>mp1;
            
            for(int i=0;i<c.length();i++)
            {
                mp1[c[i]]++;
            }
            
            for(auto &c:mp1) f[c.first]=max(f[c.first],c.second);
            
        }
          
        
      
            for(auto s : words1)

            {
                 bool flag=true;
                 unordered_map<char,int>mp2;
  
          for(auto c : s)
        {  
                mp2[c]++;
            
        }
         
        for(auto &r : f)
        {
            
            if(mp2[r.first]==0|| mp2[r.first]<r.second)

            {
                flag=false;
                break;
            }
            
        }
            
       if(flag==true)
                {
              vec.push_back(s);
        }
     
        
                
            }
            
        return vec;
           
        

        
    }
};