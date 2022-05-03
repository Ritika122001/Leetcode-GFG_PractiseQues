class Solution {
public:
    int characterReplacement(string s, int k) {
        
      
      unordered_map<char,int>mp;
    
      int i=0;
      int j=0;
      int res=INT_MIN;
      int maxi=0;
      
      while(j<s.length())
      {
         
        mp[s[j]]++;
        
        maxi = max(maxi, mp[s[j]]);
        

        if((j-i+1) - maxi <= k)
          {
                        
            res = max(res,j-i+1);
          
          //   cout<<"After valid"<< " ";
          // cout<<i << j<< " "<<endl;
        
            j++;
          }
        
        else{
          
          mp[s[i]]--;
          // cout<<"After not valid"<< " ";
          //     cout<<i<< " "<<endl;
          i++;
          j++;
        }
          
        
      }
      
      return res;
      
    }
};