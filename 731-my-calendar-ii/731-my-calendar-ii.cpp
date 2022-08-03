class MyCalendarTwo {
public:
    
   // map<int,int>mp;
    
     vector<pair<int,int>>booking;
      vector<pair<int,int>>doublebooking;
        
    
    MyCalendarTwo() {
        
    }
    
    
    
    bool book(int start, int end) {
    
//        1st Approach
        
        for(auto c : doublebooking)
        {
            
            
            if(start<c.second and end>c.first)
                  return false;

        
        }
        
        
        for(auto c : booking)
        {
           
            if(start<c.second && end >c.first)
            {
                doublebooking.push_back( { max(c.first,start) , min(end,c.second)});
            }
            
        }
        
        booking.push_back({start,end});
        return true;
        
    }
        
    
    // 2nd Approach--->
    
      
//         mp[start]++;
//         mp[end]--;
        
//          int sum = 0;
        
//         for(auto c:mp)
//         {
//             sum+=c.second;
//               if(sum>2)
//         {
//             mp[start]--;
//             mp[end]++;
//             return false;
//         }
            
//         }
//         return true;
        
//     }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */