// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str)
    {
        // Your code goes here 
        unordered_set<char>st;
        for(int i=0;i<str.length();i++)
        {
            st.insert(str[i]);
        }
    
        unordered_map<char,int>mp;
        int i=0;
        int j=0;
        int cnt=0;
        int n1 = str.length();
        int n2 = st.size();
        int mini = INT_MAX;
        while(j<n1)
        {
            if(cnt<n2)
            {
                if(mp[str[j]]==0)  cnt++;
          
                mp[str[j]]++;
                j++;
        
            }
            
         
                
                while(cnt==n2)
                {
                    
                    
                mini = min(mini,j-i);
                if(mp[str[i]]==1)
                {
                  cnt--;
                    //   mp.erase(str[i]);
                    
                }
                
                mp[str[i]]--; //if freq is greater than 1 
                i++;
               
                
                }
      
   
        }
        
        if(mini==INT_MAX)
        {
            return -1;
            
        }
        
 return mini;

        
        
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends