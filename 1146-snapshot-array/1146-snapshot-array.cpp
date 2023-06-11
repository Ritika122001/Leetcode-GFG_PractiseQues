class SnapshotArray {
public:
    
    map<int,vector<pair<int,int>>>mp;
    int snap_id = 0;

    
    SnapshotArray(int length) 
    {
        
        for(int i=0;i<length;i++)
        {
            mp[i].push_back({0,snap_id});
        }
        
        
    }
    
    void set(int index, int val) 
    {
       if(mp[index][mp[index].size()-1].second==snap_id)
            mp[index][mp[index].size()-1].first = val;
        else
            mp[index].push_back({val,snap_id});

        
    }
    
    int snap() 
    {
        
        return snap_id++;
        
    }
    
    int get(int index, int snap) 
    {
        
      if(mp[index].size()==1 || mp[index][0].second==snap)
            return mp[index][0].first;
        
        int l = 0, r = mp[index].size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(mid==mp[index].size()-1)
                return mp[index][mp[index].size()-1].first;
            if(mp[index][mid].second<=snap && mp[index][mid+1].second>snap)
                return mp[index][mid].first;
            else if(mp[index][mid].second>snap)
                r = mid-1;
            else
                l = mid+1;
        }
         
        return mp[index][mp[index].size()-1].first;


        
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */