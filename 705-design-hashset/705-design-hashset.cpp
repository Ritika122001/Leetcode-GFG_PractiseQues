class MyHashSet {
public:
  vector<int>ans[123];
  int size = 123;
  //       int ind;
  
    MyHashSet() {
      
      
//       ans.resize(1e6+1,false);
    
    }
    
    void add(int key) {
      
      int index = key % size;
      if(!contains(key))
      {
        ans[index].push_back(key);
      }
      
//       if(search(key)!=true)
        
//       { 
//         ans.push_back(key);
        
//       }
 
    
      // ans[key] = true;        
      
    }
  
//   bool search(int key)
//   {
//     for(int i=0;i<ans.size();i++)
//     {
//       if(ans[i]==key)
//       {
//         ind= i;
//         return true;
//         break;
//       }
      
     
//     }
//      return false;
//   }
    
    void remove(int key) {
      int index = key%size;
      
      for(int i=0;i<ans[index].size();i++)
      {
        if(ans[index][i]==key)
        {
          ans[index].erase(ans[index].begin() + i );
          break;
        }
      }
      // search(key);
      // ans.erase(ans.begin() + ind);
      // ans[key]=false;
        
    }
    
    bool contains(int key) {
    
      // return ans[key];
      
      int index = key%size;
      
      for(int i=0;i<ans[index].size();i++)
      {
        if(ans[index][i]==key)
        {
          return true;
          break;
        }
      }
      
      return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */