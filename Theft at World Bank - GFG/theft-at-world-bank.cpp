// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	long double maximumProfit(int N, long long C, vector<long long> w, vector<long long> p){
	    // Code here.
	    
	    
	    priority_queue<pair<double ,pair<int,int>>>pq;
	    
	    for(int i=0;i<N;i++)
	    {
	        double ratio = (double)p[i]/w[i];
	        pq.push({ ratio, {p[i],w[i]}});
	    }
	    
	    long double profit=0;
	    
	    while(!pq.empty() and C>0)
	    {
	        double ratio = pq.top().first;
	        int weight = pq.top().second.second;
	        int pr = pq.top().second.first;
	        pq.pop();
	        
	        int sqr = sqrt(weight);
	        if(sqr*sqr == weight) continue;
	      
	        if(C>weight)
	        {
	            C-=weight;
	            profit+=double(pr);
	        }
	        else{
	            
	            profit+=double(ratio*C);
	            C-=C;
	            
	        }
	        
	        
	    }
	    
	    return profit;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		long long C;
		cin >> n >> C;
		vector<long long > w(n), p(n);
		for(int i = 0; i < n; i++){
		    cin >> w[i] >> p[i];
		}
		Solution ob;
		long double ans = ob.maximumProfit(n, C, w, p);
		cout << fixed << setprecision(3) << ans << "\n";
	}  
	return 0;
}  // } Driver Code Ends