class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        
        priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>>pq;
        
        for(int i=0;i<arr.size();i++)
        {
            
            pq.push({abs(arr[i] - x) , i });
                
        }
        
        vector<int>ans;
        int cnt=0;
        
        while(cnt < k)
        {
             
            pair<int,int> x= pq.top();
            pq.pop();
            ans.push_back(arr[x.second]);
            cnt++;
        
            
        }
        
        sort(ans.begin() , ans.end());
        
        return ans;
    
    }
};


// 1 2 3 4 5  k=4 x=-1

// a-x  

// 1 - (-1) = 2 
// 2 -(-1) =  3 
// 3 - (-1) = 4
// 4 -(-1) =  5
// 5 -(-1) =  6
