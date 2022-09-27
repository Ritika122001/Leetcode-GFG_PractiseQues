class Solution {
public:
    string pushDominoes(string d) 
    {
        
        int n = d.size();
        vector<int>left(n,0);
        vector<int>right(n,0);
        char prev='.';
        int cnt=1;
        
        for(int i=0;i<n;i++)
        {
            
            if(d[i] == 'R')
            {
                prev='R';
                cnt=1;
                continue;
                
            }
            
            else if(d[i]=='L')
            {
                prev='L';
              
            }
            
            if(prev=='R' and d[i]=='.')
            {
                right[i] = cnt;
                cnt++;
            }
           
        }
        
        prev='.';
         cnt=1;
        
        
        for(int i=n-1; i>=0;i--)
        {
            
             if(d[i]=='L')
            {
                prev='L';
                cnt=1;
                continue;
            }
            
            else if(d[i]=='R')
            {
                
                prev='R';
            
            }
            
            if( prev=='L' and d[i] =='.')
            {
                left[i] = cnt;
                cnt++;
            }
        
        }
        
        
        string ans="";
        
        for(int i=0;i<n;i++)
        {
            
            if(left[i] == 0 and right[i]==0)
            {
                ans+= d[i];
                
            }
            
            else if(left[i]==0)
            {
                ans+='R';
            }
            
            else if(right[i]==0)
            {
                ans+='L';
            }
            
            else if(left[i] == right[i])
            {
                ans+='.';
            }
            
            else if(left[i] > right[i])
            {
                ans+='R';
            }
            else{
                ans+='L';
            }
            
        }
        
        return ans;
        
        
    }
};