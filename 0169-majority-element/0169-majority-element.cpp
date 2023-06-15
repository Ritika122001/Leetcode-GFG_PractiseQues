class Solution {
public:
    int majorityElement(vector<int>& arr) {
        
         int candidate = INT_MIN;
    int life=0;
    
        int n = arr.size();
    for(int i=0;i<n;i++)
    {
        
        
             if(arr[i]==candidate)
        {
            life++;
        }
        
        
        else  if(life==0)
        {
            candidate= arr[i];
            life=1;
//             continue;
        }
        else{
            life--;
        }
    }
    
    int cnt=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==candidate)
        {
            cnt++;
        }
    }
    
    if(cnt >n/2)
    {
        return candidate;;
    }
    return  -1;
        
    }
};