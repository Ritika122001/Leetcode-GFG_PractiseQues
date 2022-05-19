// { Driver Code Starts
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    int transform (string A, string B)
    {
        //code here.
        
        if(A.length()!=B.length())
        {
            return -1;
        }
        
        
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        
        for(int i=0;i<A.length();i++)
        {
            
            mp1[A[i]]++;
            mp2[B[i]]++;
        }
        
        
        if(mp1!=mp2)
        {
            return -1;
        }
        
        
        int i = A.length()-1;
        int cnt=0;
        int j=  B.length()-1;
        while(i>=0 and j>=0)
        {
            
            if(A[i]==B[j])
            {
                i--;
                j--;
            }
            
            else{
                cnt++;
                i--;
            }
            
            
            
        }
        return cnt;
        
        
        
        
        
        
        
        
        
    }
};


// { Driver Code Starts.

int main () 
{
    int t; cin >> t;
    while (t--)
    {
        string A, B; 
        cin >> A >> B;
        Solution ob;
        cout <<ob.transform (A, B) << endl;
    }
}  // } Driver Code Ends