class MyHashSet {
public:
    
    vector<list<int>>mp;
    int size;
    MyHashSet() {
        size = 1e6+1;
        mp.resize(size);
        
    }
    
    int hash(int key)
    {
        return key%size;
    }
    
    list<int>::iterator search(int key)
    {
        
        int index = hash(key);
       return find(mp[index].begin(), mp[index].end(), key);
        
        
    }
    
    void add(int key) {
        
        if(contains(key))
            return ;
        
        int i = hash(key);
        mp[i].push_back(key);
        
    }
    
    void remove(int key) {
        
        if(!contains(key))
            return;
        
        int index = hash(key);
        mp[index].erase (search(key));
    }
    
    bool contains(int key) {
        int  i = hash(key);
        if(search(key) != mp[i].end())
        {
            return true;
        }
        
        else
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