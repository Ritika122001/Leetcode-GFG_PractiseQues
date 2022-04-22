// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
public:


string remove(string s)
{ 
    string temp="";
    int i=0;

  while(i<s.length())
  {
     
      int j=i+1;
      
        while(s[i]==s[j] and j<s.length())
   {
       j++;
       
   }
   
  
   
   if(j==i+1) temp+=s[i];
    i=j;
   
   
  }
  
  if(s!=temp) return remove(temp);
  return temp;
 
     

    
}

    
};

// { Driver Code Starts.

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        Solution ob;
        cout << ob.remove(s) << "\n";
    }
    return 0;
}  // } Driver Code Ends