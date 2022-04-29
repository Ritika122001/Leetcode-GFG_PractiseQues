// { Driver Code Starts
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    int numOfPairs(int X[], int Y[], int N) {
        // code here
        
        map<int,int>mpx;
        map<int,int>mpy;
        map<pair<int,int>,int>mp;
        int ans=0;
        
        for(int i=0;i<N;i++)
        {
            int x = X[i];
            int y = Y[i];
            ans+= mpx[x] + mpy[y] - 2*(mp[{x,y}]);
            //2 for remove duplicate pair;
            
            mpx[x]++;
            mpy[y]++;
            mp[{x,y}]++;
        }
        
        return ans;
        
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        int X[N], Y[N];
        
        for(int i=0; i<N; i++)
            cin>>X[i];
        for(int i=0; i<N; i++)
            cin>>Y[i];

        Solution ob;
        cout << ob.numOfPairs(X,Y,N) << endl;
    }
    return 0;
}  // } Driver Code Ends