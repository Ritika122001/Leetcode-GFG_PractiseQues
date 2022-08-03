class MyCalendarThree {
public:
    
  
    int maxi =INT_MIN;
    map<int,int>mp;
    
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        
         int sum = 0;
        
        mp[start]++;
        mp[end]--;
       
        for(auto c:mp)
        {
            sum+=c.second;
             maxi = max(maxi,sum);
//               if(sum>k)
//         {
//             mp[start]--;
//             mp[end]++;
           
        // }
            
        }
        
       
        return maxi;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */