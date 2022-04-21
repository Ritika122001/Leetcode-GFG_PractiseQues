class MyHashSet {
public:
  vector<int>ans;
  //       int ind;
  
    MyHashSet() {
      
      ans.resize(1e6+1,false);
    

        
    }
    
    void add(int key) {
      
      
//       if(search(key)!=true)
        
//       { 
//         ans.push_back(key);
        
//       }
     
      ans[key] = true;
        
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
      
      // search(key);
      // ans.erase(ans.begin() + ind);
      ans[key]=false;
        
    }
    
    bool contains(int key) {
    
      return ans[key];
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */