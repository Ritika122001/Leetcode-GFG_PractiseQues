class NumberContainers {
public:
    
   map<int,int>mp1;
    map<int, set<int>>mp2;
    
    
    
    NumberContainers() {
        
    
        mp1.clear();
        mp2.clear();
       

        
    }
    
    void change(int index, int number) {
        
       if(mp1.find(index)==mp1.end())
       {
           mp1[index]=number;
           mp2[number].insert(index);
       }
        
        else{
            
            int prev = mp1[index];
            mp1[index]=number;
            mp2[prev].erase(index);
            
            if(mp2[prev].size()==0)
            {
                mp2.erase(prev);
            }
            
            mp2[number].insert(index);
        }
        
        
    }
    
    int find(int number) {
        
        if(mp2.find(number)==mp2.end())
        {
            return -1;
        }
        
        return *(mp2[number].begin());
        
        
        
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */