class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {

        
         int candidate1 = INT_MIN;
    int candidate2 = INT_MIN;
    int life1 = 0;
    int life2 =0;
    
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==candidate1)
        {
            life1++;
        }
        
       else if(arr[i] == candidate2)
        {
            life2++;
        }
        
        else if(life1==0)
        {
            candidate1 = arr[i];
            life1=1;
        }
        
        else  if(life2==0)
        {
            candidate2 = arr[i];
            life2=1;
        }

        else{
            life1--;
            life2--;
        }
        
    }
    
    vector<int>ans;
    
    int cnt1=0;
    int cnt2=0;
    int n =arr.size();
    
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==candidate1)
        {
            cnt1++;
        }
        
       else if(arr[i] == candidate2)

        {
        cnt2++;        
        }
    }
    
    
    if(cnt1> floor(n/3) )
    {
        
        ans.push_back(candidate1);

        
    }
    
    if(cnt2> floor(n/3))
    {
             ans.push_back(candidate2);
    }
    
  
    
    sort(ans.begin(),ans.end());
    
    return ans;
    
        
        
    }
};