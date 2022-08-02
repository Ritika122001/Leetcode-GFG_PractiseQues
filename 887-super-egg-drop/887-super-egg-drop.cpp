class Solution {
public:
    
    int solve(int e , int f, vector<vector<int>>&memo)
    {
        
   
      
        if(f==0 || f==1)
        {
            return f;
        }
        
        if(e==1) return f;
    
    if(memo[e][f]!=-1)
    {
        return memo[e][f];
    }
        
          int res=INT_MAX;
        
//         for(int k=1;k<=f;k++)
//         {
            
//             int temp =1 +  max( solve(e-1,k-1,memo) , solve(e,f-k,memo));
//             res  = min(temp,res);
            
//         }
        
        int l=1;
        int h=f;
        int temp=0;
        
        while(l<=h)
        {
            int mid = l + (h-l)/2;
            int temp1 = solve(e-1,mid-1,memo);
            int temp2 = solve(e,f-mid,memo);
            int temp =  1 + max(temp1, temp2);
            if(temp1<temp2)
            {
                l = mid+1; //to gain more temp for worst case
                
            }
            
            else{
                h=mid-1;  // go downward
            }
            
            res = min(res, temp);
            
        }

        
        return memo[e][f] = res;
        
         }
        
   
    int superEggDrop(int e, int f) {
        
       vector<vector<int>> memo(e+1, vector<int>(f+1, -1));
        return solve(e,f,memo);
     
    }
};