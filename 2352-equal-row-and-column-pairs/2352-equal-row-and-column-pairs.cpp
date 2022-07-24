class Solution {
public:
    
 
    int equalPairs(vector<vector<int>>& grid) {
        
        map<vector<int> ,int >mp1;
        map<vector<int> ,int>mp2;
        
        vector<int>vec;
        
        for(int i=0;i<grid.size();i++)
        {
            
            for(int j=0;j<grid[0].size();j++)
            {
                vec.push_back(grid[i][j]);
                  
            }
            
            mp1[vec]++;
            vec.clear();
        }
        
        vector<int>ans;
        
       for(int j=0;j<grid[0].size();j++)
       {
        
           for(int i=0;i<grid.size();i++)
            
            {
                ans.push_back(grid[i][j]);
                  
            }
            
            mp2[ans]++;
            ans.clear();
        }
        
        int cnt=0;
        
        
//         for(auto c: mp1)
//         {
//             vector<int>ans = c.first;
//             for(int i=0;i<ans.size();i++)
//             {
//                 cout<<ans[i]<<" ";
//             }
            
//             cout<<c.second<<" "<<endl;
//         }
        
//         cout<<"Map2"<<" : ";
        
//          for(auto c: mp2)
//         {
//             vector<int>ans = c.first;
//             for(int i=0;i<ans.size();i++)
//             {
//                 cout<<ans[i]<<" ";
//             }
            
//             cout<<c.second<<" "<<endl;
//         }
        
      
//         cout<<"CNT"<<" ";
        
        for(auto c: mp1)
        {
            
            vector<int>ans = c.first;
            
            for(auto s : mp2)
            {
                vector<int>res = s.first;
                
                
                if(ans == res)
                {
                  
                    
                    cnt+= c.second * s.second;
                    cout<<cnt<<" ";
                    
                    
                }
                
                
            }
        }
        
        return cnt;
        
        
    }
};