class MyCalendar {
public:
    
    // vector<vector<int>>vec;
    vector<pair<int,int>>vec;
    
    MyCalendar() {
        
        
        
    }
    
    bool book(int start, int end) {
        
        
        for(auto c :vec)
        {
            if(start>=c.second || end<=c.first)
            {
                continue;
            }
            else{
            
                
                return false;
            }
        }
     
//        for(int i=0;i<vec.size();i++)
//        {
//            if(start>=vec[i][1])
//            {
//                continue;
//            }
           
//            else if(end<=vec[i][0])
//            {
//                continue;
               
//            }
           
//            else{
//                return false;
//            }
//        }
        
        vec.push_back({start,end});
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */