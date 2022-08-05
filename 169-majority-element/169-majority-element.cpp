class Solution {
public:
    int majorityElement(vector<int>& arr) {
        
        
          int candidate = INT_MIN;
    int life=0;
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==candidate)
        {
            life++;
        }
        
        else if(life==0)
        {
            candidate= arr[i];
            life=1;
        }
        else{
            life--;
        }
    }
    
    return  candidate;
    
        
    }
};