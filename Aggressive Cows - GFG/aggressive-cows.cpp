//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
public:

bool ispossible(int mindist , int k, vector<int>&stalls)
{
    
    int cow=1;
    int lastposition = stalls[0];
    
    for(int i=1;i<stalls.size();i++)
    {
        if(stalls[i]-lastposition >= mindist)
        {
            cow++;
            lastposition = stalls[i];
            
            if(cow>=k) return true;
        }
    }
    
    return false;

}


int solve(int n, int k, vector<int> &stalls) {
    
    sort(stalls.begin(),stalls.end());
    int l=0;
    int h = stalls[n-1]- stalls[0];
    int res;
    
    while(l<=h)
    {
        
        int mid = l + (h-l)/2;
        if(ispossible(mid,k,stalls))
        {
                res= mid;
                l =mid+1;
                    
                        
        }
        
        else{
            
            h=mid-1;
        }
    
        
    }
    
    return res;
    
    
    
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input

        int n, k;
        cin >> n >> k;

        vector<int> stalls(n);
        for (int i = 0; i < n; i++) {
            cin >> stalls[i];
        }
        // char ch;
        // cin >> ch;

        Solution obj;
        cout << obj.solve(n, k, stalls) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends