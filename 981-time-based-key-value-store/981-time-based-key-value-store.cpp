class TimeMap {
public:
    
    // unordered_map<string, vector<pair<string ,int>>>mp;
    unordered_map<string,unordered_map<int,string>>mp;
    
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {

        mp[key][timestamp] = value;
        // mp[key].push_back({value,timestamp});
        
    }
    
    string get(string key, int timestamp) 
    {
        
        while(timestamp!=0)
        {
            if(mp[key][timestamp]=="")
                timestamp--;
            else
                return mp[key][timestamp];
        }
        return "";

        
//            string ans=" ";
        
//             if(mp.find(key)!=mp.end())
//             {
//                 vector<pair<string,int>>r = mp[key];
                
//                 for(int i=0;i<r.size();i++)
//                 {
                    
//                     if(r[i].second == timestamp)
//                     {
//                         return r[i].first;
//                     }
                    
//                     else{
                        
//                        time = max(time,r[i].second);
                        
                        
//                     }
                    
//                 }
                
//             }
        
                
    
//         return ans;
        
        
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */