class Solution {
public:

    
       bool solve(string s, string t)
    {
         map<char,char>mp;
        int i=0;
  
        int m = s.length();
       
        
        while(i<m)
        {
            if(mp.find(s[i])!=mp.end() and mp[s[i]]!=t[i])
            {
                return false;

              
            }
            
            else{
                
                mp[s[i]]=t[i];
                i++;
          
            }
        }
        
        return true;
        
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
        
        vector<string>ans;
        
        for(auto c: words)
        {
            if(solve(c,pattern) and solve(pattern,c))
            {
                ans.push_back(c);
            }
        }
        
        return ans;
        
        
//         vector<string>vec;
        
//         for(auto c: words) //traversing the words array
//         {
         
//             unordered_map<char,char>mp1;
//             unordered_map<char,char>mp2;
//       //Two maps for checking bijection property
    
//             bool flag=true;
   
            
//          for(int i=0;i<c.size();i++) //traversing the strings of words
//             {
                
//                 if(mp1.find(pattern[i])==mp1.end()) 
                    
//         //in 1st map we are checking for pattern[i] exist or not ?
        
//                 {
                   
//                  mp1[pattern[i]] = c[i];  
                    
//                     // if not exist insert c[i] 
                    
//                     // Like Pattern{abb} - > c { abc }
//                      //  "a" -> "a"
//                     //  "b" -> "b"
                    
                   
//                 }
                
                
//                 else{
                    
//                     if(mp1[pattern[i]]!=c[i])  
                        
// //if pattern[i] exist in map1 , we check for its value != c[i] --> no bijection exist --> break;
                        
                        
//                     {
//                         flag=false;
//                         break;
//                     }
                
//                 }
                    
// // Again check in second map2 same for c     
         
        
        
        
//         if(mp2.find(c[i])==mp2.end())
//                 {
                  
//                      mp2[c[i]] = pattern[i];
                    
                   
//                 }
                
                
//                 else{
                    
//                     if(mp2[c[i]]!=pattern[i])
//                     {
//                         flag=false;
//                         break;
//                     }
                
//                 }
                    
                    
            
//             }
             
//             if(flag==true)  //if flag==true -> both the conditions true
//             {
//                 vec.push_back(c);    //push into vector
//               }
//         }
        
//         return vec;
        
        
        
        
        
        
      
    }
};