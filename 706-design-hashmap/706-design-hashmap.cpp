class MyHashMap {
public:
  
  // vector<int>ans;
  vector<vector<pair<int,int>>>ans;
  const int size = 10000;
  
  
    MyHashMap() {
      
      ans.resize(size);
        
    }
    
    void put(int key, int value) {
      
      int ind = key%size;
      
      vector<pair<int,int>>&r = ans[ind];
      
   for(int i=0;i<r.size();i++)
        {
        
        if(r[i].first==key)
        {
          r[i].second=value;
          return ;
          
        }
        
      }
      
      r.push_back(make_pair(key,value));
      
      
       // ans[key]=value;       
    }
    
    int get(int key) {
        
       int ind = key%size;
      
      vector<pair<int,int>>&r = ans[ind];
      
   for(int i=0;i<r.size();i++)
        {
        
           if(r[i].first==key)
        {
          
         
          return r[i].second;
             break;
          
        }
        
      }
      
      return -1;
    }
      
    
        // return ans[key];
     
     
    
    
    void remove(int key) {
      
      // ans.erase(ans.begin()  + key);
       int ind = key%size;
      
      vector<pair<int,int>>&r = ans[ind];
      
//    for(int i=0;i<r.size();i++)
//         {
        
//         if(r[i].first==key)
//         {
//           r.erase(r[i]);
//           return ;
          
//         }
        
//       }
      for (auto iter = r.begin(); iter != r.end(); iter++)
		{
			if (iter->first == key)
			{
				r.erase(iter);
                return;
			}
		}
      
      // ans[key]=-1;
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */